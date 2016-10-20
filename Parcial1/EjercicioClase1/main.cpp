
#include "Director.hpp"
#include "Avion.hpp"
#include "BoeingBuilder.hpp"

#include <iostream>

int main(){
  Director * director = new Director();
  director->setBuilder(new BoeingBuilder());
  director->construct();

  Avion* avion = director->getAvion();
  std::cout << avion->getMarca() << std::endl;
}
