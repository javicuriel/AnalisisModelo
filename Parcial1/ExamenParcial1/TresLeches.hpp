
#ifndef __TresLeches__
#define  __TresLeches__

#include "Pastel.hpp"

class TresLeches: public Clon<Pastel,TresLeches>{
private:
  TresLeches(){}
public:
static TresLeches * create(){
  return new TresLeches();
}

void batido(){
  std::cout << "Batiendo mescla del pastel de Tres Leches..." << "\n";
}
void amasado(){
  std::cout << "Amasando masa de pastel de Tres Leches..." << "\n";
}
void horneado(){
  std::cout << "Horneando el pastel de Tres Leches..." << "\n";
}
void decorado(){
  std::cout << "Decorando el pastel de Tres Leches..." << "\n";
}
void empacado(){
  std::cout << "Empacando el pastel de Tres Leches..." << "\n";
}
};

#endif
