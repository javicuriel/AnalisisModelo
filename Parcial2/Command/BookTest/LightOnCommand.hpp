#ifndef __LightOnCommand__
#define __LightOnCommand__

#include "Command.hpp"
#include "Light.hpp"

class LightOnCommand:public Command{
  Light * light;
public:
  LightOnCommand(Light * light){
    this->light = light;
  }
  void execute(){
    light->changeState();
  };
};

#endif
