#ifndef __DisplayMeterObserver__
#define __DisplayMeterObserver__

#include <vector>
#include "Observer.hpp"

class DisplayMeterObserver:public Observer{
  int lastData;
public:
  void update(int data){
    lastData = data;
    displayData();
  }
  void displayData(){
    std::cout << lastData  << std::endl;
  }

};

#endif
