#ifndef __TVAzteca__
#define __TVAzteca__

#include <vector>
#include "Noticiero.hpp"
#include "NoticiaReal.hpp"

class TVAzteca: public Noticiero, public Observer{
  NoticiaReal npn;
  NoticiaReal nh;
  NoticiaReal nt;
public:
  TVAzteca(){
    name = "TV Azteca";
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
