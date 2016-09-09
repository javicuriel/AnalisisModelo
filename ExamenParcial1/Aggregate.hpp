
#ifndef __Aggregate__
#define __Aggregate__

#include <vector>

template<class T>
class Iterator;

template<class T>
class Aggregate{
private:
  T * list;
  int size = 0;
public:
  Aggregate(){}
  ~Aggregate(){
    delete [] list;
  }

  void add(T element){
    T * temp = new T [++size];
    for(int i = 0;i<size-1;i++){
      temp[i] = list[i];
    }
    delete [] list;
    list = temp;
    list[size-1] = element;

  }

  T  getElementAtPos(int index){
    return list[index];
  }

  int getSize(){
    return size;
  }

  Iterator<T> * getIterator(){
    return new  Iterator<T>(this);
  }
};

#endif
