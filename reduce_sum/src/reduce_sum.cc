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
 * @brief ReduceVector sumará todos los elementos del vector
 * @param Toma como parámetros un vector del tipo double
 * @return Devuelve el resultado tipo double
 */


double ReduceVector(const std::vector<double>& vector) {
  double resultado{0};
  for (int i{0}; i < vector.size(); i++) {
    resultado += vector[i];
  }
  return resultado;
} 



int main(int argc, char* argv[]) {
  std::vector<double> vector;
  vector = GenerateVector(argv);
  for (int i{0}; i < vector.size(); i++) {
    std::cout << vector[i] << std::endl;
  }
  std::cout << ReduceVector(vector) << std::endl;
  return 0;
}
