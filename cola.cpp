//
//  cola.cpp
//  Práctica_4
//
//  Created by Jonás López Mesa on 10/04/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "cola.hpp"
using namespace std;

cola_t::cola_t(unsigned int sz):
frente_(-1),
final_(0),
vector_(sz){ }

cola_t::~cola_t(){
    frente_ = -1;
    final_ = 0;
}

bool cola_t::empty(){
    return frente_ < final_;
}

bool cola_t::full(){
    int a = frente_-final_;
    int b = vector_.get_sz()-1;
    if (a >= b) {
        return true;
    } else {
        return false;
    }
    //return frente_ - final_ >= vector_.get_sz()-1;
}

void cola_t::insertar(char dato){
    if (!full()) {
        
        frente_++;
        vector_.set_dato(frente_, dato);
        
        cout << "quedan " << frente_-final_ << " espacios" << endl;
    }
}

char cola_t::extraer(){
    if (!empty()) {
        char aux = vector_.get_dato(final_);
        final_++;
        return aux;
    }
}
