
#ifndef __Imposible__
#define  __Imposible__

#include "Pastel.hpp"

class Imposible: public Clon<Pastel,Imposible>{
private:
  Imposible(){}
public:
static Imposible * create(){
  return new Imposible();
}

void batido(){
  std::cout << "Batiendo mescla del pastel de Imposible..." << "\n";
}
void amasado(){
  std::cout << "Amasando masa de pastel de Imposible..." << "\n";
}
void horneado(){
  std::cout << "Horneando el pastel de Imposible..." << "\n";
}
void decorado(){
  std::cout << "Decorando el pastel de Imposible..." << "\n";
}
void empacado(){
  std::cout << "Empacando el pastel de Imposible..." << "\n";
}
};

#endif
