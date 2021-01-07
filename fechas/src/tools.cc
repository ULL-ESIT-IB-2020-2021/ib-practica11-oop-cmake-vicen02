/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Vicente Medina Julián
 * @date 22.dec.2020
 * @brief Useful functions for Fechas
 *
 */

#include "tools.h"

#include <cstdlib>  // exit
#include <iostream>

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa un único número natural para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc == 2) {
    std::string parameter{argv[1]};
    if (parameter == "--help") {
      std::cout << kHelpText << std::endl;
      exit(EXIT_SUCCESS);
    }
  } else if (argc != 4) {
    std::cout << argv[0] << ": Faltan parámetros" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " dd/mm/aa N fichero_salida.txt" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información"
              << std::endl;
    exit(EXIT_SUCCESS);
  }
}
