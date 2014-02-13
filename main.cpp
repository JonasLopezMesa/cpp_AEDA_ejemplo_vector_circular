//
//  main.cpp
//  Práctica_4
//
//  Created by Jonás López Mesa on 10/04/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
using namespace std;
#include "buffer_cola.hpp"
#include "buffer_pila.hpp"


int main ()
{
    
    char quijote[]  = "En un lugar de la mancha de cuyo nombre no quiero acordarme";
    int x = 0;
    while (x == 0) {
        int m;
        cout << "\n";
        cout << "Escoje una opción" << endl;
        cout << "1: Buffer con Pila" << endl;
        cout << "2: Buffer con Cola" << endl;
        cout << "3: Salir" << endl;
        cin >> m;
        
        if (m == 1) {
            buffer_tp manchap(5);
            int j = 0;
            while (j < 60) {
                
                manchap.insertar(quijote[j]);
                j++;
            }
            
        } if (m == 2) {
            buffer_t mancha(5);
            int i = 0;
            while (i < 60) {
                
                mancha.insertar(quijote[i]);
                i++;
            }
            
        } if (m == 3) {
            cout << "Adios!" << endl;
            x = 3;
            return 0;
        } if (m != 1 && m != 2 && m != 3) {
            cout << "Escoge una opción correcta" << endl;
        }
    }
     
    
    
    /* 
    buffer_t mancha(10);
    buffer_tp manchap(10);
    cout << "000000" << endl;
    int i = 0;
    while (i < 60) {
        //cout << "000001" << endl;
        mancha.insertar(quijote[i]);
        i++;
    }
    cout << endl;
    
    i = 0;
    while (i < 60) {
        //cout << "000001" << endl;
        manchap.insertar(quijote[i]);
        i++;
    }
    cout.flush();
    */
    
    return 0;
}

