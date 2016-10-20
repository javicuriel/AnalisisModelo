
#ifndef __Clon__
#define __Clon__


template <class Base, class SubClase>
class Clon : public Base{
public:
    virtual Base* clonar(){
        return new SubClase(dynamic_cast<SubClase&>(*this));
    }
};

#endif
