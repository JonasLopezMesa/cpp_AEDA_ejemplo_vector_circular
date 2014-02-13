//
//  buffer.cpp
//  Práctica_4
//
//  Created by Jonás López Mesa on 10/04/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "buffer_cola.hpp"
using namespace std;

buffer_t::buffer_t(unsigned int sz):
cola_(sz) { }

buffer_t::~buffer_t(){
    flush();
}

void buffer_t::flush() {
    while (!cola_.empty()) {
        char aux = cola_.extraer();
        cout << aux;
    }
    cout.flush();
}

void buffer_t::insertar(char dato){
    if (cola_.full()) {
        flush();
    }
    cola_.insertar(dato);
}
