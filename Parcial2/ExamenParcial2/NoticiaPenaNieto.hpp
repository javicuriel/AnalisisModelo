#ifndef __NoticiaPenaNieto__
#define  __NoticiaPenaNieto__

#include <iostream>
#include "Noticia.hpp"
#include "NoticiaReal.hpp"

class NoticiaPenaNieto:public NoticiaReal{
    NoticiaReal notaReal;
    std::string nota;
public:
    NoticiaPenaNieto(){
      nota = "";
    }
    NoticiaPenaNieto& operator=(const std::string& value){
      if(value.find("Peña Nieto") != std::string::npos){
        notaReal = value;
        nota = value;
      }
      else{
        std::cout << "No es noticia de Peña Nieto\n";
      }
      return *this;
    }
    std::string display(){
      return notaReal.display();
    }

};

#endif
