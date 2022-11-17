/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  P29973
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief Write a program that, given a number n, prints a “triangle of size n”.
* @see https://jutge.org/problems/P29973_en/
*/

#include <iostream>

int main() {
  int numero{0};
  std::cin >> numero;
  for (int i = 1; i <= numero; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;        
  }
  return 0;
}
