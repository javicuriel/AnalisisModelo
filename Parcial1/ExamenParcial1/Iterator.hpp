
#ifndef __Iterator__
#define __Iterator__

#include "Inventario.hpp"

template<class T>
class Iterator{
private:
  Iterator(){}
  Inventario<T> * list;
  int i = 0;
public:
  Iterator(Inventario<T> * list){
    this->list = list;
  }

  T next(){
      return list->getElementAtPos(i++);
  }

  bool hasNext(){
    return i < list->getSize();
  }
  ~Iterator(){
    delete  [] list;
  }

};

#endif
