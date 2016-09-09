

#include <iostream>
#include <string>
#include "DistritoFederal.hpp"
#include "Aguascalientes.hpp"
#include "Clon.hpp"
#include "Iterator.hpp"

int main(){
  Fabrica * distritoFederal = DistritoFederal::getInstance();
  Fabrica * aguascalientes = Aguascalientes::getInstance();
  Pastel * tres = aguascalientes->createPastel("Tres Leches");
  Pastel * sacher = distritoFederal->createPastel("Sacher");
  Pastel * impos = distritoFederal->createPastel("Imposible");
  Pastel * test = impos->clonar();
  Aggregate<Pastel> lista;

  return 0;
}
