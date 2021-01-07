/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Vicente Medina Julián
 * @date 22.dec.2020
 * @brief Definition for class Fecha
 *
 */

#include <string>

/** Clase Fecha
 *
 */
class Fecha {
 public:
  Fecha();
  Fecha(std::string date_string);
  Fecha(int day, int month, int year);
  int GetDay();
  int GetMonth();
  int GetYear();

  bool isLeapYear();
  Fecha GetNextDay();

 private:
  int day_;
  int month_;
  int year_;
};
