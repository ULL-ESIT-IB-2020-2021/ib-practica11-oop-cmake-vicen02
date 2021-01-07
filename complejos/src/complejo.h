/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Vicente Medina Julián
 * @date 21.dec.2020
 * @brief This file declares the Complejo class
 *
 *
 */

/** Representación de un número complejo
 */
class Complejo {
 public:
  Complejo();
  Complejo(int real, int imaginary);

  int GetRealPart();
  int GetImaginaryPart();

  static Complejo Add(Complejo first, Complejo second);
  static Complejo Subtract(Complejo first, Complejo second);
  void print();

 private:
  int real_;
  int imaginary_;
};
