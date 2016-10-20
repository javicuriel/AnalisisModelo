
#ifndef __BoeingBuilder__
#define __BoeingBuilder__

#include "Avion.hpp"


class BoeingBuilder: public Builder {
   void getAlas (){
     Alas * alas = new Alas();
     alas->setMarca("Boeing");
     avion->setAlas(alas);
   }
   void getMotor (){
     Motor * motor = new Motor();
     motor->setMarca("GE");
     motor->setPotencia(3500);
     avion->setMotor(motor);
   }
   void getSerie (){
     avion->setSerie(1000);
   }
   void getMarca (){
     avion->setMarca("Boeing");
   }
};

#endif
