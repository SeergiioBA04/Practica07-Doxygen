/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P90133
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 11 2022
* @brief Write a program that computes logarithms in several bases.
* @see https://jutge.org/problems/P90133_en/
*/

#include<iostream>

int LogALogB(const int& loga, const int& baseb) {
  return (loga > (baseb-1)) ? 1 + LogALogB(loga / baseb, baseb) : 0;
}

int main() {
  int base{0}, num{0};
  while (std::cin >> base >> num) {
    if (base < 2 || num < 1) {
      return 1;
    }
    std::cout << LogALogB(num,base) << std::endl;
  }
  return 0;
}
