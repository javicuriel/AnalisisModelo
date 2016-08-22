//  Created by Javier Curiel
//  Copyright © 2016 Javier Curiel. All rights reserved.
//

#ifndef __Desktop__
#define __Desktop__

#include <iostream>
#include "Computer.hpp"

class Desktop: public Clon<Computer,Desktop>{
private:
  Desktop(){}

public:
  static Desktop * create(){
    return new Desktop();
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
