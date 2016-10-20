// #include <map>
// #include <string>
// #include <iostream>
//
// template<class T,class Func>
// class Command{
// public:
//   virtual T execute(T *,int,Func) = 0;
// };
// template<class T,class Func>
// class Sum: public Command<T,Func>{
//     T execute(T* arr, int size,Func f){
//       T acum = 0;
//       for (int i = 0; i < size; i++) {
//         acum += arr[i];
//       }
//       return acum;
//     }
// };
//
// template<class T,class Func>
// class Operaciones{
//   std::map<std::string,Func> operacionesConApuntadores;
//   std::map<std::string,Command<T,Func>*> operaciones;
// public:
//   Operaciones(){
//     operaciones.insert(std::make_pair("suma",new Sum<T,Func>()));
//   }
//   void insert(std::string s,Func f){
//     operacionesConApuntadores.insert(std::make_pair(s,f));
//   }
//
//   Func getOpFunc(std::string op){
//     typename std::map<std::string,Command<T,Func>*>::iterator it;
//     it = operacionesConApuntadores.find(op);
//     if(it!=operacionesConApuntadores.end()){
//       return it->second;
//     }
//     return NULL;
//   }
//
//   Command<T,Func>* getOp(std::string op){
//     typename std::map<std::string,Command<T,Func>*>::iterator it;
//     it = operaciones.find(op);
//     if(it!=operaciones.end()){
//       return it->second;
//     }
//     return NULL;
//   }
// };
//
// int main() {
//   Operaciones<double,int> op;
//   double * arrD = new double[5]{2.1,3.5,2.3,4.5,3.1};
//   Command<double,int> * c =  op.getOp("suma");
//   std::cout << c->execute(arrD,5,0);
//   return 0;
// }


/*

    Patrón Command aplicado a un arreglo genérico
        *Esta implementación corresponde
         a una implementación de plantillas y funciones (apuntadores a funciones)
*/

#include<map>
#include<string>
#include<iostream>

using namespace std;

class Command
{
public:
    template<class T, class Func>
    T execute(T* arr , int size, Func fun)
    {
        return fun(arr, size);
    }
};


template<class T>
T sum(T* arr, int size)
{
    T acum = 0;
    for(int i=0; i<size; i++)
        acum+= arr[i];
    return acum;
}

typedef int(*signature)(int*, int);

int main()
{
    double* arrD = new double[5]{2.1,3.5, 2.3,4.3,1.4};
    char* arrC = new char[5]{'A','R','I','E','L'};
    int* arrI = new int[2]{12, 22};
    Command c;

    cout << c.execute<double, double(*)(double*,int)>(arrD, 5, sum) << endl; //Aplicar la función a un arreglo de enteros

    cout << c.execute<char, char(*)(char*, int)>(arrC, 5, sum)<< endl; //aplicar la función a un arreglo de chars

    cout << c.execute<int, signature>(arrI, 5, sum)<< endl; //aplicar la función a un arreglo de ints, pero guardando la definición de la función en un typedef

    

}
