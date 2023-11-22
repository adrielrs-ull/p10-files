/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 22 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief Una función que recibe una cadena de caracteres en formato
  * std::string y la devuelve en formato std::array de caracteres
  * @bug There are no known bugs
  * 
  */


#include <iostream>
#include <array>
#include <string>


constexpr int KLongitud{7};

/**
 * @brief La función toma una cadena de texto y luego genera un array asignando
 * cada letraa cada elemento del array
 * @param Toma como parámetros la cadena introducida
 * @return Devuelve el array
 */

std::array<char, KLongitud> ArrayCadena(const std::string& cadena) {
  std::array<char, KLongitud> vector;
  if (cadena.size() >= KLongitud) {
    for (int i{0}; i < KLongitud; i++) {
      vector[i] = cadena[i];
    }
  } else if (cadena.size() < KLongitud) {
    int contador{0};
    int i{0};
    while (contador < KLongitud) {
      if (i == cadena.length()) {
        i = 0;
      }
      vector[contador] = cadena[i];
      contador++;
      i++;
    }
  }
  return vector;
}

int main() {
  std::string cadena;
  std::cin >> cadena;
  std::array<char, KLongitud> array = ArrayCadena(cadena);
  for (int i{0}; i < KLongitud; i++) {
    std::cout << array[i] << std::endl;
  }
  return 0;
}
