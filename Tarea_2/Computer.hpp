
#indef __Computer__
#define __Computer__

#include <iostream>

class Computer{
public:
  virtual void configure() = 0;
  virtual void assemble() = 0;
  virtual void installSoftware() = 0;
  virtual void pack() = 0;
}
