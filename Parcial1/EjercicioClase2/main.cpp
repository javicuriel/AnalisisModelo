
#include "Iterator.hpp"
// #include "Aggregate.hpp"

#include <iostream>

class Persona{
private:
  int edad;
public:
  Persona(int edad) : edad(edad){}
  int getEdad(){return edad;}
  Persona(){}
  ~Persona(){}
};


int main(){
  Persona p1(20);
  Persona p2(30);
  Persona p3(19);
  Aggregate<Persona> lista;
  lista.add(p1);
  lista.add(p2);
  lista.add(p3);

  for(Iterator<Persona> * i = lista.getIterator();i->hasNext();)
    std::cout << i->next().getEdad() <<  "\n";

  return 0;
}
