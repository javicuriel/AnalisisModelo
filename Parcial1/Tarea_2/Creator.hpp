//  Created by Javier Curiel
//  Copyright © 2016 Javier Curiel. All rights reserved.
//

#ifndef __Creator__
#define __Creator__

#include <iostream>
#include "Computer.hpp"

class Creator{
public:
  virtual Computer * factoryMethod(std::string type) = 0;
  Computer * createComputer(std::string type){
    Computer * cpu = factoryMethod(type);
    cpu->configure();
    cpu->assemble();
    cpu->installSoftware();
    cpu->pack();
    std::cout << type << " finished!" << std::endl;
    return cpu;
  }
};

#endif
