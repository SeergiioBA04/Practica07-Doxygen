/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  P29973
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief Write a program such that, given a number n, prints a “rhombus of size n”.
* @see https://jutge.org/problems/P29973_en/
*/

#include <iostream>

int main() {
  int row{0};
  std::cin >> row;
  int space{row-1};
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= space; j++) 
      std::cout << " ";
    }
    space--;
    for (int j = 1; j <= (2*i-1); j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  space = 1;
  for (int i = 1; i <= row-1; i++) {
    for(int j = 1; j <= space; j++) {
      std::cout<<" ";
    }
    space++;
    for(int j = 0; j < (2*(row-i)-1); j++) {
      std::cout<<"*";
    }
    std::cout << std::endl;
  }
  return 0;
}
