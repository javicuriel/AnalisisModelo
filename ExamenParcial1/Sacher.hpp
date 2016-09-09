
#ifndef __Sacher__
#define  __Sacher__

#include "Pastel.hpp"

class Sacher:public Clon<Pastel,Sacher>{
private:
  Sacher(){}
public:
static Sacher * create(){
  return new Sacher();
}

void batido(){
  std::cout << "Batiendo mescla del pastel de Sacher..." << "\n";
}
void amasado(){
  std::cout << "Amasando masa de pastel de Sacher..." << "\n";
}
void horneado(){
  std::cout << "Horneando el pastel de Sacher..." << "\n";
}
void decorado(){
  std::cout << "Decorando el pastel de Sacher..." << "\n";
}
void empacado(){
  std::cout << "Empacando el pastel de Sacher..." << "\n";
}

};

#endif
