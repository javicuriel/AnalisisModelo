#ifndef __Televisa__
#define __Televisa__

#include <vector>
#include "Noticiero.hpp"
#include "NoticiaReal.hpp"


class Televisa: public Noticiero{
  NoticiaReal npn;
  NoticiaReal nh;
  NoticiaReal nt;
public:
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

};

#endif
