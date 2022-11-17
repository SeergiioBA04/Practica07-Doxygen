/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  P80660
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 11 2022
* @brief Let n be any strictly positive natural number. Consider the follow         ing process. If n is an even number, we divide it by two. Otherwis         e, we multiply it by 3 and add 1 to it. When we reach 1, we stop.          For instance, starting with 3, we obtain the sequence 
* @see https://jutge.org/problems/P80660_en/
*/

#include<iostream>

int SequenceCollatz(int &numeros) {
  int i{0};
  while (numeros != 1) {
    if (numeros % 2 == 0) {
      numeros = numeros / 2;
    }
    else {
      numeros = (numeros * 3) + 1;
    }
    i++;
  }
  return i;
}
    
int main() {
  int numeros{0};
  while (std::cin >> numeros) {
    std::cout << SequenceCollatz(numeros) << std::endl;
  }
  return 0;
}
