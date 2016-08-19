//  Created by Javier Curiel
//  Copyright © 2016 Javier Curiel. All rights reserved.
//

#include <iostream>
#include <string>
#include "ConcreteCreator.hpp"
#include "Computer.hpp"

int main(){
  Creator * user = ConcreteCreator::getInstance();
  Computer * cpu = user->createComputer("Desktop");
  return 0;
}
