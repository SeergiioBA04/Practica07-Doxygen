/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file   P61061_Product_ of_ digits 
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 11 2022
* @brief Write a program that reads several numbers, and for each one prints         the product of its digits, and the product of the digits of the             latest product, etcetera, until the resulting product has just one          digit.
* @see https://jutge.org/problems/P61061_en
*/

#include<iostream>

int ProductDigits(int numero) {
  int total{1};
  if (numero == 0) {
    return total = 0;
  }
  while (numero != 0) {
    total = total * (numero % 10);
    numero = numero / 10;
  }
  return total;
}

int main() {
  int numero{0};
  while (std::cin >> numero) {
    int ProductoDelProducto (ProductDigits(numero));  
    std::cout << "The product of the digits of " << numero << " is "
              << ProductoDelProducto << "." <<std::endl;
    while (ProductoDelProducto >= 10) {
      numero = ProductoDelProducto;
      ProductoDelProducto = ProductDigits(numero);
      std::cout << "The product of the digits of " 
                << numero << " is " << ProductoDelProducto << "." 
                << std::endl;
    }
    std::cout << "----------" << std::endl;
  }
}
