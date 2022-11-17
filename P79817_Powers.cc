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

/*
 * @param {number} numero
 * @param {number} elevado
 * return total
 */
int CalculoDePotencia(const int base, const int exponente) {
  int resultado = 1;
  for (int i = 0; i < exponente; i++) {
    resultado = resultado * base;
  }  
  return resultado;
}	

int main() {
  int base{0}, exponente{0};
  while (std::cin >> base >> exponente) {
    std::cout << CalculoDePotencia(base, exponente) << std::endl;	  
  }
}
