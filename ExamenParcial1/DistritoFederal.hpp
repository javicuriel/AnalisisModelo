
#ifndef __DistritoFederal__
#define __DistritoFederal__

#include <iostream>
#include "Fabrica.hpp"
#include "Sacher.hpp"
#include "Imposible.hpp"

class DistritoFederal:public Fabrica{
private:
  static DistritoFederal * instance;
public:
  static DistritoFederal * getInstance(){
    if(!instance)
      instance = new DistritoFederal();
    return instance;
  }
  Pastel * factoryMethod(std::string tipo){
    Pastel * pastel = nullptr;
    if(tipo=="Sacher")
      pastel = Sacher::create();
    else if(tipo=="Imposible")
      pastel = Imposible::create();
    if (pastel){
      pastel->setIngrediente("chocolate",rand()%100);
      pastel->setIngrediente("frutas",rand()%100);
      pastel->setIngrediente("merengue",rand()%100);
    }
    return pastel;
  }
};

DistritoFederal* DistritoFederal::instance = nullptr;

#endif
