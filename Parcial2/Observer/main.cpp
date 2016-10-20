#include <iostream>

#include "DisplayMeterObserver.hpp"
#include "GlucoseMeterSubject.hpp"

int main() {
  GlucoseMeterSubject glucoseMeter;
  DisplayMeterObserver display;

  glucoseMeter.registerObserver(&display);
  glucoseMeter.setGlucose(100);
  glucoseMeter.removeObserver(&display);
  glucoseMeter.setGlucose(120);
  glucoseMeter.registerObserver(&display);
  glucoseMeter.setGlucose(220);
  return 0;
}
