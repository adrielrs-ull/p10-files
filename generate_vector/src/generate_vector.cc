#include <iostream>
#include <vector>
#include <string>

/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 1 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief El programa generará un vector en función de los parámetros
  * introducidos
  * @bug There are no known bugs
  * 
  */

/**
 * @brief Comprueba que los parámetros introducidos sean correctos
 * @param Los parámetros introducidos por la línea de comandos
 * @return Devuelve verdadero sin son correctos y falso si no lo son
 */

bool CheckCorrectParameters(const int argc, char* argv[], const int& kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "El número de parámetros introducidos es erróneo" << std::endl << std::endl;
    return false;
  }
  return true;
}

/**
 * @brief Esta es la función que genera los número aleatorios. El unsigned es
 * apra que solo tome valores mayores a cero
 * @param Toma como parámetros el intervalo min y max
 * @return Devuelve el número aleatorio
 */


unsigned int NumeroAleatorio(unsigned int min, unsigned int max) {
  static unsigned int s_state{ 5323 };
  s_state = 8253729 * s_state + 2396403;
  unsigned int result = s_state % (max - min + 1) + min;
  return result;
}

/**
 * @brief La función GenerateVector devuevle el vector creado con números
 * aleatorios
 * @param Toma como parámetros los introducidos por la línea de comandos
 * @return Devuelve el vector formado
 */


std::vector<double> GenerateVector(char *argv[]) {
  int size = std::stod(argv[1]);
  double lower = std::stod(argv[2]);
  double upper = std::stod(argv[3]);
  std::vector<double> vector;
  for (int i{0}; i < size; i++) {
    vector.emplace_back(NumeroAleatorio(lower, upper));
  }
  return vector;
}

int main(int argc, char* argv[]) {
  if (CheckCorrectParameters(argc, argv, 4)) {
    std::vector<double> vector = GenerateVector(argv);
    for (int i{0}; i < vector.size(); i++) {
      std::cout << vector[i] << std::endl;
    }
  } else {
    std::cout << "Wrong Input" << std::endl;
  }

  return 0;
}
