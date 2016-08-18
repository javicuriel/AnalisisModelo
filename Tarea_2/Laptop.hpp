//  Created by Javier Curiel
//  Copyright © 2016 Javier Curiel. All rights reserved.
//

#indef __Laptop__
#define __Laptop__

#include <iostream>

class Laptop: public Computer{
private:
  Laptop(){}

public:
  Laptop * create(){
    configure();
    assemble()
    installSoftware();
    pack();
    return new Laptop();
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

}
