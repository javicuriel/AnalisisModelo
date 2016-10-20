//  Created by Javier Curiel
//  Copyright © 2016 Javier Curiel. All rights reserved.
//

#ifndef __Tablet__
#define __Tablet__

#include <iostream>
#include "Computer.hpp"

class Tablet: public Clon<Computer,Desktop>{
private:
  Tablet(){}

public:
  static Tablet * create(){
    return new Tablet();
  }

  void configure() {
    std::cout << "Configuring computer..." << std::endl;
  }

  void assemble() {
    std::cout << "Assembling computer..." << std::endl;
  }

  void installSoftware() {
    std::cout << "Installing software in computer..." << std::endl;
  }

  void pack() {
    std::cout << "Packing computer..." << std::endl;
  }

};

#endif
