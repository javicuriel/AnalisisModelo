#ifndef __Subject__
#define __Subject__

#include <vector>
#include "Observer.hpp"

class Subject{
  std::vector<Observer*> observers;
public:
  void registerObserver(Observer * o){
    observers.push_back(o);
  }
  void removeObserver(Observer * o){
    observers.erase(std::remove(observers.begin(),observers.end(),o),observers.end());
  }
  void notifyObservers(int data){
    for(Observer * o:observers)
      o->update(data);
  }
};

#endif
