#ifndef __TVAzteca__
#define __TVAzteca__

#include <vector>
#include "Noticiero.hpp"
#include "NoticiaReal.hpp"

class TVAzteca: public Noticiero{
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
