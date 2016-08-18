//
//  main.cpp
//  tarea_1
//
//  Created by Javier Curiel on 8/12/16.
//  Copyright © 2016 Javier Curiel. All rights reserved.
//

#include <iostream>
#include <string>


void createPC(std::string x);
void sleep(unsigned int miliseconds);
void createSuspense();

int main() {
    createPC("Laptop");
    
}

// Creacion de computadora
void createPC(std::string x){
    std::cout << "Seleccionando componentes";
    createSuspense();
    std::cout << "Ensamblando " << x;
    createSuspense();
    std::cout << "Instalando y configurando software";
    createSuspense();
    std::cout << "Empaquetando el producto final";
    createSuspense();
    std::cout << "Terminado!" << std::endl;
}

// Simulando un tiempo de espera
void createSuspense(){
  std::cout << "...";
  sleep(1000000);
  std::cout << std::endl;
}

// Funcion para esperar un determinado numero de milisegundos
void sleep(unsigned int miliseconds){
    clock_t goal = miliseconds + clock();
    while (goal > clock());
}
