/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Ginés Cruz Chávez
 * @date 22.dec.2020
 * @brief Dada una fecha, un número y un fichero, escribe en el fichero las N
 * siguientes fechas en orden cronológico
 */

#include <fstream>
#include <iostream>
#include <string>

#include "fecha.h"
#include "tools.h"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);

  std::string date_str{argv[1]};
  int number{std::stoi(argv[2])};
  std::string file_name{argv[3]};
  std::ofstream out_file(file_name, std::ofstream::out);

  Fecha date{date_str};
  for (int i = 0; i < number; i++) {
    date = date.GetNextDay();
    out_file << date.GetDay() << "/" << date.GetMonth() << "/" << date.GetYear()
             << std::endl;
  }

  return 0;
}
