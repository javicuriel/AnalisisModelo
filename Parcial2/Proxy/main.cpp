//
//  main.cpp
//  Proxy
//
//  Created by Javier Curiel on 10/19/16.
//  Copyright © 2016 Javier Curiel. All rights reserved.
//

#include<iostream>
using namespace std;

class ArrayPositiveInts;

class Proxy
{
private:
    int idx;

public:
    Proxy(){idx=0;}

    Proxy& operator=(const int& value);
    friend std::ostream& operator<<(std::ostream& os, const Proxy& proxy){
        os << proxy.idx;
        return os;
    }
};

class ArrayPositiveInts
{
private:
    Proxy* values;
    int size;
public:
    ArrayPositiveInts()
    {
        size = 100;
        values = new Proxy[size];
    }
    Proxy& operator[](int idx) //se devuelve un elemento del arreglo por referencia
    {
        if(idx<0){
            cout << "No de aceptan indices negativos \n";
            return *new Proxy();
        }
        return values[idx];  //devuelvo el elemento
    }

};

Proxy& Proxy::operator=(const int& value){
    if(value>=0)
    {
        idx = value;
        return *this;
    }
    else
    {
        cout << "error" << endl;
        return *this;
    }
}


int main()
{
    ArrayPositiveInts a;
    a[0]=1;
    a[1]=-2;
    cout << a[1];
}
