/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file P29973
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 11 2022
* @brief Write a program that, given a number n, prints a “triangle of size n”.
* @see https://jutge.org/problems/P29973_en/
*/

#include<iostream>

int NumAsteriscos(int numero) {
  int i{0};
  while (i < numero) {
    char asterisco{'*'};
    i++;
  }
}


int main() {
  int numero{0};
  std::cin >> numero;
  std::cout << NumAsteriscos(numero) << std::endl;    
}
