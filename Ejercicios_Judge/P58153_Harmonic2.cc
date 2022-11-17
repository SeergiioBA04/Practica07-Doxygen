/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file   P58153
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 11 2022
* @brief Write a program that reads pairs of numbers n and m with n ≥ m,            and for each pair prints Hn − Hm.
* @see https://jutge.org/problems/P58153_en
*/

#include<iostream>
#include<iomanip>

double Harmonic(int& number1, int& number2) {
  double resta{0.0};
  number2++;
  while (number2 <= number1) {
    resta = resta + 1.0/number2;
    number2++;
  }
  return resta;
}

int main() {
  int number1{0};
  int number2{0};
  while (std::cin >> number1 >> number2) {
    if (number2 > number1) {
      return 1;
    }
    std::cout << std::fixed << std::setprecision(10) << Harmonic(number1,
    number2) << std::endl;
  }
  return 0;
}
