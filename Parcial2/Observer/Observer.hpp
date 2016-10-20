#ifndef __Observer__
#define __Observer__

#include <vector>

class Observer{
public:
  virtual void update(int) = 0;
};

#endif
