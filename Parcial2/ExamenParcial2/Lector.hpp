#ifndef __Lector__
#define __Lector__

#include <vector>
#include "Observer.hpp"

class Lector:public Observer{
  NoticiaReal noticia;
  std::string noticiero;
public:
  void update(NoticiaReal noticia,std::string name){
    this->noticia = noticia;
    noticiero = name;
    displayData();
  }
  void displayData(){
    std::cout << noticiero << ": " << noticia  << std::endl;
  }

};

#endif
