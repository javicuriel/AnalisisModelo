#ifndef __Observer__
#define __Observer__

#include <vector>
#include "NoticiaReal.hpp"

class Observer{
public:
  virtual void update(NoticiaReal noticia,std::string name) = 0;
};

#endif
