#ifndef __Noticiero__
#define  __Noticiero__

#include <vector>
#include "Observer.hpp"
#include "Noticia.hpp"

class Noticiero{
  std::vector<Observer*> observers;
public:
  void registerObserver(Observer * o){
    observers.push_back(o);
  }
  void removeObserver(Observer * o){
    observers.erase(std::remove(observers.begin(),observers.end(),o),observers.end());
  }
  void notifyObservers(NoticiaReal data){
    for(Observer * o:observers)
      o->update(data);
  }
};

#endif
