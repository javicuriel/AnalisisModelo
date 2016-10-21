#ifndef __MVSNoticias__
#define __MVSNoticias__

#include <vector>
#include "Noticiero.hpp"
#include "NoticiaReal.hpp"


class MVSNoticias: public Noticiero, public Observer{
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
  void update(NoticiaReal noticia){
    if (noticia.display()=="Hilary")
      escribeHilary(noticia);
    else if (noticia.display()=="Trump")
      escribeTrump(noticia);
  }
};

#endif
