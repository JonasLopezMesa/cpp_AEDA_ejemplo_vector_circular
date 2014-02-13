//
//  buffer_pila.cpp
//  Práctica_4
//
//  Created by Jonás López Mesa on 10/04/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "buffer_pila.hpp"
using namespace std;

buffer_tp::buffer_tp(unsigned int sz):
pila_(sz) { }

buffer_tp::~buffer_tp(){
    flush();
}

void buffer_tp::flush() {
    while (!pila_.empty()) {
        char aux = pila_.extraer();
        cout << aux;
    }
    cout.flush();
}

void buffer_tp::insertar(char dato){
    if (pila_.full()) {
        flush();
    }
    pila_.insertar(dato);
}
