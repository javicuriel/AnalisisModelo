#ifndef __Remote__
#define __Remote__

#include "Command.hpp"

class Remote{
  Command * slot;
public:
  Remote(){};
  void setCommand(Command * command){
    slot = command;
  }
  void clickButton(){
    slot->execute();
  }
};

#endif
