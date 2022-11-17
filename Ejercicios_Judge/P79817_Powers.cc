/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P79814
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 11 2022
* @brief Write a program to compute powers.
* @see https://jutge.org/problems/P79814_en/
*/

#include<iostream>
#include<math.h>

int main() {
  int numero{0}, elevado{0};
  int total;
  int i{0};
  while (std::cin >> numero >> elevado) {
    total = pow(numero, elevado);
    std::cout << total << std::endl;
    i++;
  }
}
