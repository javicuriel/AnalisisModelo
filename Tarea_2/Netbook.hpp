//  Created by Javier Curiel
//  Copyright © 2016 Javier Curiel. All rights reserved.
//

#indef __Netbook__
#define __Netbook__

#include <iostream>

class Netbook: public Computer{
private:
  Netbook(){}

public:
  Netbook * create(){
    configure();
    assemble()
    installSoftware();
    pack();
    return new Netbook();
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
