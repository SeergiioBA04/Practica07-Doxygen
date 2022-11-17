/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P31170
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief A leap year has 366 days. After the Gregorian reform, the leap years are those multiple of four that do not end with two zeros, and also the years ending with two zeros such that, after removing these two zeros, are divisible by four. Thus, 1800 and 1900, although being multiples of four, were not leap years; by contrast, 2000 was a leap year. 
* @see https://jutge.org/problems/P31170_en/
*/

#include <iostream>

/**
 * @description Description of program
 */

void PrintProgramPurpose() {
  std::cout << "Este programa te dice si introduces un año bisiesto o no" << std::endl;
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
    std::cout << "Introduce un numero entero, vuelve a intentarlo" << std::endl;
    return false;
  }
  return true;
}

/**
 * @param {number} year
 * @returns {true},{false}
 * @description Anyo Bisiesto
 */
bool leapYear(const int& year) {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    return true;
  }
  return false;
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
  int year{0};
  sscanf(argv[1], "%d", &year);
  if (leapYear(year)) {
    std::cout << "YES" << std::endl;
    return 0;
  }
  std::cout << "NO" << std::endl;
  return 0;
}
