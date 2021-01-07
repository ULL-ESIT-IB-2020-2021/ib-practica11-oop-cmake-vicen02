/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Vicente Medina Julián
 * @date 21.dec.2020
 * @brief Main program for complejos
 *
 */

#include <iostream>

#include "complejo.h"

/** Main functiond
 */
int main() {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;
  resultado = Complejo::Add(complejo1, complejo2);
  resultado.print();
  resultado = Complejo::Subtract(complejo1, complejo2);
  resultado.print();

  return 0;
}
