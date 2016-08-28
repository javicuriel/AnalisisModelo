
#ifndef __Director__
#define __Director__

#include "Builder.hpp"

class Director {
  Builder * builder;
public:
  void setBuilder(Builder * builder){
    this->builder = builder;
  }
  Avion * getAvion(){
    return builder->getAvion();
  }
  void construct(){
    builder->createAvion();
    builder->getAlas();
    builder->getMotor();
    builder->getSerie();
    builder->getMarca();
  }
};

#endif
