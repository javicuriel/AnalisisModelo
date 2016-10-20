
#ifndef __Fabrica__
#define __Fabrica__

#include <iostream>
#include "Pastel.hpp"

class Fabrica{
public:
  virtual Pastel * factoryMethod(std::string tipo) = 0;
  Pastel * createPastel(std::string tipo){
    Pastel * pastel = factoryMethod(tipo);
    pastel->batido();
    pastel->amasado();
    pastel->horneado();
    pastel->decorado();
    pastel->empacado();
    return pastel;
  }
};

#endif
