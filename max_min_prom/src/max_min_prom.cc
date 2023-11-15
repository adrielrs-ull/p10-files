#include <iostream>
#include <vector>
#include <string>

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

/**
 * @brief MaxMinProm calcula el máximo, mínimo y promedio del vector creado
 * @param Toma como parámetros el vector formado y las variables maximo, minimo
 * y promedio
 * @return Devuelve como resultado el numero maximo y minimo del vector y el
 * promedio
 */



void MaxMinProm(const std::vector<double> vector, double& maximo, double& minimo, double& promedio) {
  double suma{0};
  minimo = vector[0];
  for (int valor : vector) {
    if (valor > maximo) {
      maximo = valor;
    } else if (valor < minimo) {
      minimo = valor;
    }
    suma += valor;
  }
  promedio = suma / vector.size();
}

int main(int argc, char* argv[]) {
  std::vector<double> vector = GenerateVector(argv);
  double maximo{0}, minimo{0}, promedio{0};
  MaxMinProm(vector, maximo, minimo, promedio);
  for (int i{0}; i < vector.size(); i++) {
    std::cout << vector[i] << std::endl;
  }
  std::cout << "Maximo: " << maximo << std::endl;
  std::cout << "Minimo: " << minimo << std::endl;
  std::cout << "Promedio: " << promedio << std::endl;
  return 0;
}
