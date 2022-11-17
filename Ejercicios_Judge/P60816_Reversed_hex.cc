/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  P60816
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 7 2022
* @brief Write a program that reads a number and prints its binary representation reversed.
* @see https://jutge.org/problems/P37500_en/
*/

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int numero{0};
    std::cin >> numero;
    char hex[20];
    sprintf(hex,"%X",numero);
    std::string result(hex),result_copy(hex);
    std::reverse(result.begin(),result.end());
    std::cout << result << std::endl;

    return 0;
}
