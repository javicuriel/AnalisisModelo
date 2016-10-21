//
//  main.cpp
//  ExamenParcial2
//
//  Created by Javier Curiel on 10/21/16.
//  Copyright © 2016 Javier Curiel. All rights reserved.
//

#include <iostream>
#include "MVSNoticias.hpp"
#include "CNNNoticias.hpp"
#include "RadioFormula.hpp"
#include "Televisa.hpp"
#include "TVAzteca.hpp"
#include "Reportero.hpp"
#include "Lector.hpp"

using namespace std;

int main() {
  MVSNoticias mvs;
  CNNNoticias cnn;
  RadioFormula radioformula;
  Televisa televisa;
  TVAzteca tvazteca;
  Reportero reportero;
  Lector lector;

  reportero.registerObserver(&mvs);
  reportero.registerObserver(&cnn);
  reportero.registerObserver(&radioformula);
  reportero.registerObserver(&televisa);
  reportero.registerObserver(&tvazteca);


  // mvs.registerObserver(&lector);
  // cnn.registerObserver(&lector);
  // radioformula.registerObserver(&lector);
  // televisa.registerObserver(&lector);
  // tvazteca.registerObserver(&lector);

  // reportero.reportar("Peña Nieto la caga otra ves");
  // reportero.reportar("Hilary ganando las elecciones");
  // reportero.reportar("Trump asesinado por mexicano enojado");


  int op,op2;
  op = op2 = -1;
  cout << "Recuerda que no estas suscrito a nada!!\n";
  while (op!=0){
    op2 = -1;
    cout << "1)Generar noticia\n";
    cout << "2)Suscribirte a noticiero\n";
    cout << "3)Cancelar subscripcion\n";
    cout << "0)Salir\n";
    cin >> op;
    if(op==1){
      while(op2!=0){
        cout << "De:\n";
        cout << "1)Peña Nieto\n";
        cout << "2)Hilary\n";
        cout << "3)Trump\n";
        cout << "0)Salir\n";
        cin >> op2;
        switch (op2) {
          case 1:
            reportero.reportar("Peña Nieto la caga otra ves");
            op2=0;
            break;
          case 2:
            reportero.reportar("Hilary ganando las elecciones");
            op2=0;
            break;
          case 3:
            reportero.reportar("Trump asesinado por mexicano enojado");
            op2=0;
            break;
        }
      }
    }
    else if(op==2){
      while(op2!=0){
        cout << "A:\n";
        cout << "1)MVS Noticias\n";
        cout << "2)CNN Noticias\n";
        cout << "3)Radio Formula\n";
        cout << "4)Televisa\n";
        cout << "5)TV Azteca\n";
        cout << "0)Salir\n";
        cin >> op2;
        switch (op2) {
          case 1:
            mvs.registerObserver(&lector);
            op2=0;
            break;
          case 2:
            cnn.registerObserver(&lector);
            op2=0;
            break;
          case 3:
            radioformula.registerObserver(&lector);
            op2=0;
            break;
          case 4:
            televisa.registerObserver(&lector);
            op2=0;
            break;
          case 5:
            tvazteca.registerObserver(&lector);
            op2=0;
            break;
        }
      }
    }
    else if(op==3){
      while(op2!=0){
        cout << "A:\n";
        cout << "1)MVS Noticias\n";
        cout << "2)CNN Noticias\n";
        cout << "3)Radio Formula\n";
        cout << "4)Televisa\n";
        cout << "5)TV Azteca\n";
        cout << "0)Salir\n";
        cin >> op2;
        switch (op2) {
          case 1:
            mvs.removeObserver(&lector);
            op2=0;
            break;
          case 2:
            cnn.removeObserver(&lector);
            op2=0;
            break;
          case 3:
            radioformula.removeObserver(&lector);
            op2=0;
            break;
          case 4:
            televisa.removeObserver(&lector);
            op2=0;
            break;
          case 5:
            tvazteca.removeObserver(&lector);
            op2=0;
            break;
        }
      }
    }

  }
  return 0;
}
