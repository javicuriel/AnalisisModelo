#ifndef __NoticiaTrump__
#define  __NoticiaTrump__

#include <iostream>
#include "Noticia.hpp"
#include "NoticiaReal.hpp"

class NoticiaTrump:public NoticiaReal{
    NoticiaReal notaReal;
    std::string nota;
public:
    NoticiaTrump(){
      nota = "";
    }
    NoticiaTrump& operator=(const std::string& value){
      if(value=="Trump"){
        notaReal = value;
        nota = value;
      }
      else{
        std::cout << "No es noticia de Trump\n";
      }
      return *this;
    }
    std::string display(){
      return notaReal.display();
    }

};

#endif
