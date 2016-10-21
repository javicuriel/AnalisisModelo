#ifndef __CNNNoticias__
#define __CNNNoticias__

#include <vector>
#include "Noticiero.hpp"
#include "Observer.hpp"

class CNNNoticias: public Noticiero, public Observer{
  NoticiaReal nh;
  NoticiaReal nt;
public:
  CNNNoticias(){
    name = "CNN News";
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
  }

};

#endif
