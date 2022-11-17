/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  P33839
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 11 2022
* @brief Write a program that reads several numbers and prints the sum of the digits of each one.
* @see https://jutge.org/problems/P33839_en/
*/

#include<iostream>

int suma_cifras(int numero) {
  int suma{0};
  while (numero > 0) {
    suma = suma + (numero % 10);
    numero = numero / 10;
  } 
  return suma; 
}

int main() {
  int numero{0};
  while (std::cin >> numero) {
    std::cout << "The sum of the digits of " << numero << " is " 
               << suma_cifras(numero) << "." << std::endl;
  }
}
