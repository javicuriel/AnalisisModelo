
#ifndef __Motor__
#define __Motor__

#include <string>

class Motor {
  int numeroSerie;
  std::string marca;
  int potencia;
public:
  void setMarca(std::string marca){
    this->marca = marca;
  }
  void setPotencia(int potencia){
    this->potencia = potencia;
  }
};

#endif
