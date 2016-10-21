#ifndef __Televisa__
#define __Televisa__

#include <vector>
#include "Noticiero.hpp"
#include "NoticiaReal.hpp"


class Televisa: public Noticiero, public Observer{
  NoticiaReal npn;
  NoticiaReal nh;
  NoticiaReal nt;
public:
  Televisa(){
    name = "Televisa";
  }
  void escribePena(NoticiaReal noticia){
    npn=noticia;
    notifyObservers(noticia);
  }
  void escribeHilary(NoticiaReal noticia){
    nh=noticia;
    notifyObservers(noticia);
  }
  void escribeTrump(NoticiaReal noticia){
    nt=noticia;
    notifyObservers(noticia);
  }
  void update(NoticiaReal noticia,std::string name){
    if (noticia.display().find("Hilary") != std::string::npos)
      escribeHilary(noticia);
    else if (noticia.display().find("Trump") != std::string::npos)
      escribeTrump(noticia);
    else if (noticia.display().find("Peña Nieto") != std::string::npos)
      escribePena(noticia);
  }

};

#endif
