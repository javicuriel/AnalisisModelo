
#ifndef __Avion__
#define __Avion__

#include <string>
#include "Motor.hpp"
#include "Alas.hpp"
#include "Piloto.hpp"

class Avion {
  int numeroSerie;
  std::string marca;
  Motor * motor;
  Alas * alas;
public:
  std::string getMarca(){
    return marca;
  }
  int getSerie(){
    return numeroSerie;
  }
  Motor * getMotor(){
    return motor;
  }
  Alas * getAlas(){
    return alas;
  }
  void setMarca(std::string marca){
    this->marca = marca;
  }
  void setSerie(int numeroSerie){
    this->numeroSerie = numeroSerie;
  }
  void setMotor(Motor * motor){
    this->motor = motor;
  }
  void setAlas(Alas * alas){
    this->alas = alas;
  }
};

#endif
