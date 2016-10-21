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
      return nota;
    }
    bool operator==(const std::string& x){
      return this->nota == x;
    }
    friend std::ostream& operator<<(std::ostream& os, const NoticiaReal& noticia){
        os << noticia.nota;
        return os;
    }

};



#endif
