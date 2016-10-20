#ifndef __GlucoseMeterSubject__
#define __GlucoseMeterSubject__

#include <vector>
#include "Subject.hpp"

class GlucoseMeterSubject: public Subject{
  int glucoseLevel;
public:
  void setGlucose(int glucoseLevel){
    this->glucoseLevel=glucoseLevel;
    notifyObservers(glucoseLevel);
  }

};

#endif
