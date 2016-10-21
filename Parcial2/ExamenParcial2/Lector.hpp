#ifndef __Lector__
#define __Lector__

#include <vector>
#include "Observer.hpp"

class Lector:public Observer{
  std::string noticia;
public:
  void update(std::string noticia){
    this->noticia = noticia;
    displayData();
  }
  void displayData(){
    std::cout << noticia  << std::endl;
  }

};

#endif
