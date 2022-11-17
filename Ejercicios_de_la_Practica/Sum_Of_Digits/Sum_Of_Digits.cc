/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  Sum_Of_Digits.cc
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief Este es un programa que suma los digitos de un numero indete    rmiando de digitos 
* @see 
*/

#include<iostream>

/**
 * @description Description of program
 */
void PrintProgramPurpose() {
  std::cout << "Este es un programa que suma los digitos de un numero indetermiando de digitos" << std::endl;
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
    std::cout << "Introduce un numero entero, Vuelve a intentarlo" << std::endl;
    return false;
  }
  return true;
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
  int numero{};
  sscanf(argv[1], "%d", &numero);
  int suma{0};
  while (numero > 0) {
    suma = suma + (numero % 10);
    numero = numero / 10;
  }
  std::cout << suma << std::endl;
  return 0;
} 
