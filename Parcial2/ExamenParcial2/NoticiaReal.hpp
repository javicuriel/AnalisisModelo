#ifndef __NoticiaReal__
#define  __NoticiaReal__

#include <iostream>
#include "Noticia.hpp"

class NoticiaReal:public Noticia{
    std::string nota;
public:
    NoticiaReal(){
      nota = "";
    }
    NoticiaReal& operator=(const std::string& value){
      nota = value;
      return *this;
    }
    std::string display(){
      std::cout << nota;
      return nota;
    }

};

#endif
