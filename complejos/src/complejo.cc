/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Vicente Medina Julián
 * @date 21.dic.2020
 * @brief Defines operations on complex numbers
 *
 */

#include "complejo.h"

#include <iostream>

/** Crea un nuevo número complejo dadas su parte real e imaginaria.
 *
 *  @param[in] real Parte real
 *  @param[in] imaginario Parte imaginaria
 *  @return El número complejo creado
 */
Complejo::Complejo(int real, int imaginario) {
  real_ = real;
  imaginario_ = imaginario;
}

/** Crea un nuevo número complejo igual a 0.
 *
 *  @return El número complejo creado
 */
Complejo::Complejo() {
  real_ = 0;
  imaginario_ = 0;
}

/** Obtiene la parte real del número complejo.
 *
 *  @return Parte real del número complejo
 */
int Complejo::GetRealPart() { return real_; }

/** Obtiene la parte imaginaria del número complejo.
 *
 *  @return Parte imaginaria del número complejo
 */
int Complejo::GetimaginarioPart() { return imaginario_; }

/** Imprime el número complejo en pantalla en su forma binómica.
 */
void Complejo::print() {
  std::cout << GetRealPart() << (GetimaginarioPart() > 0 ? "+" : "")
            << GetimaginarioPart() << "i" << std::endl;
}

/** Suma dos números complejos.
 *
 *  @param[in] first Primer número complejo
 *  @param[in] second Segundo número complejo
 *  @return El resultado de la operación
 */
Complejo Complejo::Add(Complejo first, Complejo second) {
  int imaginario_sum{first.GetimaginarioPart() + second.GetimaginarioPart()};
  int real_sum{first.GetRealPart() + second.GetRealPart()};

  Complejo number{real_sum, imaginario_sum};
  return number;
}

/** Resta dos números complejos.
 *
 *  @param[in] first Primer número complejo
 *  @param[in] second Segundo número complejo
 *  @return El resultado de la operación
 */
Complejo Complejo::Subtract(Complejo first, Complejo second) {
  int imaginario_sub{first.GetimaginarioPart() - second.GetimaginarioPart()};
  int real_sub{first.GetRealPart() - second.GetRealPart()};

  Complejo number{real_sub, imaginario_sub};
  return number;
}