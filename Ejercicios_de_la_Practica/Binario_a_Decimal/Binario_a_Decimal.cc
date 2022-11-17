/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  Binario_a_Decimal.cc
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief Este programa transforma tu numero binario a numero decimal.
* @see https://jutge.org/problems/P29973_en/
*/

#include<iostream>
#include<math.h>

/**
 * @description Description of program
 */
void PrintProgramPurpose() {
  std::cout << "Este programa transforma tu numero binario a numero decimal." << std::endl;
}

/**
 * @param {number} argc
 * @param {string} argv[]
 * @param {number} kCorrectNumber
 * @returns {false} {true}
 */
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "Introduce un numero entero o binario y vuelve a intentarlo" << std::endl;
    return false;
  }
  return true;
}

/**
 * @param {number} binario
 * @returns {0}
 * @description Binary to Decimal
 */
int convert(long int binario) {
  int decimal{0}, i{0}, resto{0};
  while (binario != 0) {
    resto = binario % 10;
    binario /= 10;
    if (resto != 0 && resto != 1) {
      return 0;
    }
    decimal += resto * std::pow(2, i);
    i++;
  }
  return decimal;
}

/**
 * @param {number} argc
 * @param {char} argv[]
 * @returns {1}
 */
int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 1;
  }
  std::cout << "Todo Correcto" << std::endl;
  int binario;
  sscanf(argv[1], "%d", &binario);
  while (std::cin >> binario) {
    if (convert(binario) == 0) {
      std::cout << "Wrong Input" << std::endl;
      continue;
    }
    std::cout << convert(binario) << std::endl;
  }
  return 0;
}
