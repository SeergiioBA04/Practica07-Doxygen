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

std::string NumToBin(int& numero) {
  std::string result;
  while (numero != 0) {
    result = (numero % 2 == 0 ? "0" : "1") + result;
    numero /= 2;
  }
  return result;
}

int main() {
  int numero{0};
  std::cin >> numero;
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
