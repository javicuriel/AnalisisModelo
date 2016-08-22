
#ifndef __Computer__
#define __Computer__

#include <iostream>
#include "clon.hpp"

class Computer {
public:
virtual void configure() = 0;
virtual void assemble() = 0;
virtual void installSoftware() = 0;
virtual void pack() = 0;
virtual Computer * clonar() = 0;
};

#endif
