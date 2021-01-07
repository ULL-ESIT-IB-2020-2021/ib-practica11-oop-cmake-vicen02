/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Ginés Cruz Chávez
 * @date 22.dec.2020
 * @brief Member definitions for class Fecha
 *
 */

#include "fecha.h"

#include <iostream>
#include <string>

/** El día de la fecha */
int Fecha::GetDay() { return day_; }

/** El mes de la fecha */
int Fecha::GetMonth() { return month_; }

/** El año de la fecha */
int Fecha::GetYear() { return year_; }

/** Indica si el año de la fecha es un año bisiesto. */
bool Fecha::isLeapYear() {
  return (year_ % 4 == 0 && year_ % 100 != 0) || year_ % 400 == 0;
}

/** Avanza un día en a fecha de la clase en la que se utilice
 *
 * @return Fecha del día siguiente al indicado.
 */
Fecha Fecha::GetNextDay() {
  int new_day{day_};
  int new_month{month_};
  int new_year{year_};

  new_day++;

  /**
   * Incrementamos el mes o el año si se ha superado el número máximo de
   * días/meses. Caso para febrero y años bisiestos
  */
  if (new_month == 2) {
    if ((isLeapYear() && new_day > 29) || (!isLeapYear() && new_day > 28)) {
      new_day = 1;
      new_month++;
    }
  }

  // Caso para los demás meses, sean de 30 o 31 días.
  if (((new_day > 30) && (new_month == 4 || new_month == 6 || new_month == 9 ||
                          new_month == 11)) ||
      new_day > 31) {
    new_day = 1;
    new_month++;

    if (new_month > 12) {
      new_year++;
      new_month = 1;
    }
  }

  Fecha new_date{new_day, new_month, new_year};
  return new_date;
}

/** Constructor de la clase Fecha
 *
 *  @param[in] date. Cadena de texto con la fecha en formato dd/mm/yy
 */
Fecha::Fecha(std::string date) {
  std::string day_string{date.substr(0, 2)};
  std::string month_string{date.substr(3, 2)};
  std::string year_string{date.substr(6, 4)};

  day_ = std::stoi(day_string);
  month_ = std::stoi(month_string);
  year_ = std::stoi(year_string);
}

/** Constructor de la clase Fecha
 *
 *  @param[in] day. Día de la fecha
 *  @param[in] month. Mes de la fecha
 *  @param[in] year. Año de la fecha
 */
Fecha::Fecha(int day, int month, int year) {
  day_ = day;
  month_ = month;
  year_ = year;
}

/** Constructor de la clase Fecha
 *
 * Sin parámetros, se establece la fecha como 01/01/2020
 */
Fecha::Fecha() {
  day_ = 1;
  month_ = 1;
  year_ = 2020;
}