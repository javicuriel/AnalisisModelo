
#ifndef __Builder__
#define __Builder__

#include "Avion.hpp"

class Builder {
public:
  Avion * avion;
  Avion * getAvion (){
      return avion;
  }
  void createAvion (){
    Avion * avion = new Avion();
    this->avion = avion;
  }
  virtual void getAlas () = 0;
  virtual void getMotor () = 0;
  virtual void getSerie () = 0;
  virtual void getMarca () = 0;
};

#endif
