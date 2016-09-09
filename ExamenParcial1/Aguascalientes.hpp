
#ifndef __Aguascalientes__
#define __Aguascalientes__

#include <iostream>
#include "Fabrica.hpp"
#include "TresLeches.hpp"

class Aguascalientes:public Fabrica{
private:
  static Aguascalientes * instance;
public:
  static Aguascalientes * getInstance(){
    if(!instance)
      instance = new Aguascalientes();
    return instance;
  }
  Pastel * factoryMethod(std::string tipo){
    Pastel * pastel = nullptr;
    if(tipo=="Tres Leches")
      pastel = TresLeches::create();

    if (pastel){
      pastel->setIngrediente("leche",rand()%100);
      pastel->setIngrediente("huevo",rand()%100);
      pastel->setIngrediente("mantequilla",rand()%100);
    }
    return pastel;
  }
};

Aguascalientes* Aguascalientes::instance = nullptr;


#endif
