#ifndef __Light__
#define  __Light__

#include <iostream>
class Light{
  bool on;
public:
  Light(){
    on = false;
  }
  void changeState(){
      on = !on;
      printState();
  }
  void printState(){
    if(on)
      std::cout << "Light is on!\n";
    else
      std::cout << "Light is off!\n";
  }
};

#endif
