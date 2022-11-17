/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  Fibonacci.cc
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief Este programa te calcula la tabla de fibonacci.
*
*/

#include<iostream>

/**
 * @description Description of program
 */
void PrintProgramPurpose() {
  std::cout << "Este programa te calcula la tabla de fibonacci" << std::endl;
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
    std::cout << "Tienes que introducir un numero entero, vuelve a intentarlo." << std::endl;
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
  int numero{0}, total, valor1 = 0, valor2 = 1;
  sscanf(argv[1], "%d", &numero);
  int i = 1;
  while (i < numero) {
    valor1 = valor2;
    valor2 = total;
    total = valor1 + valor2;
    std::cout << total << std::endl;
    i++; 
  }
}
