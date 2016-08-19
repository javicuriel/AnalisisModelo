//  Created by Javier Curiel
//  Copyright © 2016 Javier Curiel. All rights reserved.
//

#ifndef __ConcreteCreator__
#define __ConcreteCreator__

#include <iostream>
#include "Creator.hpp"
#include "Desktop.hpp"
#include "Laptop.hpp"
#include "Tablet.hpp"
#include "Netbook.hpp"

class ConcreteCreator: public Creator{
private:
  ConcreteCreator(){}
  static ConcreteCreator * instance;
public:
  static ConcreteCreator * getInstance(){
    if(!instance)
      instance = new ConcreteCreator();
    return instance;
  }
  Computer * factoryMethod(std::string type){
    if(type == "Desktop")
      return Desktop::create();
    else if(type == "Laptop")
      return Laptop::create();
    else if(type == "Tablet")
      return Tablet::create();
    else if(type == "Netbook")
      return Netbook::create();
    else
      return nullptr;
  }
};

ConcreteCreator* ConcreteCreator::instance = nullptr;


#endif
