#ifndef __CNNNoticias__
#define __CNNNoticias__

#include <vector>
#include "Noticiero.hpp"
#include "Observer.hpp"

class CNNNoticias: public Noticiero, public Observer{
  NoticiaReal nh;
  NoticiaReal nt;
public:
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
