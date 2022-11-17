/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  P37500
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief Write a program that reads a number and prints its binary represent         ation reversed.
* @see https://jutge.org/problems/P37500_en/
*/

#include <iostream>
#include <string>
#include <algorithm>

/**
 * @description Description of program
 */
void PrintProgramPurpose() {
  std::cout << "Este programa ejecuta un numero decimal en binario" << std::endl;
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
    std::cout << "Introduce un numero decimal, vuelve a intentarlo" << std::endl;
    return false;
  }
  return true;
}


/**
 * @param {string} numero
 * @returns {result}
 * @description Decimal to Binary
 */
std::string NumToBin(int& numero) {
  std::string result;
  while (numero != 0) {
    result = (numero % 2 == 0 ? "0" : "1") + result;
    numero /= 2;
  }
  return result;
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
  int numero{0};
  sscanf(argv[1], "%d", &numero);
  if (numero == 0) {
    std::cout << "0" << std::endl;
    return 0;
  }
  std::string bin = NumToBin(numero);
  std::string bin_copy = bin;
  std::reverse(bin.begin(),bin.end());
  std::cout << bin << std::endl;
  return 0;
}
