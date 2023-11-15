#include<iostream>
#include <vector>
#include <algorithm>

std::vector<int> ConcatenarVector(const std::vector<int>& vector1, const std::vector<int>& vector2) {
  std::vector<int> resultado = vector1;
  for (int element : vector2) {
        if (std::find(resultado.begin(), resultado.end(), element) == resultado.end()) {
            resultado.emplace_back(element);
        }
  }
  std::sort(resultado.begin(), resultado.end());

  return resultado;
}


int  main() {
  int numero;
  std::cin >> numero;
  std::vector<int> vector1, vector2, resultado;
  for (int i{0}; i < numero; i++) {
    int elemento;
    std::cin >> elemento;
    vector1.emplace_back(elemento);
  }
  for (int i{0}; i < numero; i++) {
    int elemento;
    std::cin >> elemento;
    vector2.emplace_back(elemento);
  }
  resultado = ConcatenarVector(vector1, vector2);
  for (int i{0}; i < resultado.size(); i++) {
    std::cout << resultado[i] << std::endl;
  }
  return 0;
}
