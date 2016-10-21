#ifndef __NoticiaHilary__
#define  __NoticiaHilary__

#include <iostream>
#include "Noticia.hpp"
#include "NoticiaReal.hpp"

class NoticiaHilary:public NoticiaReal{
    NoticiaReal  notaReal;
    std::string nota;
public:
    NoticiaHilary(){
      nota = "";
    }
    NoticiaHilary& operator=(const std::string& value){
      if(value=="Hilary"){
        notaReal = value;
        nota = value;
      }
      else{
        std::cout << "No es noticia de Hilary\n";
      }
      return *this;
    }
    std::string display(){
      return notaReal.display();
    }

};

#endif
