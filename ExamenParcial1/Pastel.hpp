

#ifndef __Pastel__
#define  __Pastel__

#include "clon.hpp"

class Pastel{
private:
  int leche,huevo,mantequilla,chocolate,frutas,merengue;
public:
virtual void batido() = 0;
virtual void amasado() = 0;
virtual void horneado() = 0;
virtual void decorado() = 0;
virtual void empacado() = 0;
virtual Pastel * clonar() = 0;


void setIngrediente(std::string ing, int cant){
  if(ing=="leche")
    leche = cant;
  else if(ing=="huevo")
    huevo = cant;
  else if(ing=="mantequilla")
    mantequilla = cant;
  else if(ing=="chocolate")
    chocolate = cant;
  else if(ing=="frutas")
    frutas = cant;
  else if(ing=="merengue")
    merengue = cant;
}
};

#endif
