#ifndef __Reportero__
#define __Reportero__

#include <vector>
#include "Noticiero.hpp"
#include "Observer.hpp"

#include "NoticiaPenaNieto.hpp"
#include "NoticiaHilary.hpp"
#include "NoticiaTrump.hpp"

class Reportero: public Noticiero{
public:
  void reportar(std::string str){
    NoticiaReal * nota;
    if(str.find("Peña Nieto") != std::string::npos)
      nota = new NoticiaPenaNieto;
    else if(str.find("Hilary") != std::string::npos)
      nota = new NoticiaHilary;
    else if (str.find("Trump") != std::string::npos)
      nota = new NoticiaTrump;
    *nota = str;
    notifyObservers(*nota);
  }

};

#endif
