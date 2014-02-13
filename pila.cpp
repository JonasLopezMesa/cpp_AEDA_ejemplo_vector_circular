//
//  pila.cpp
//  Práctica_4
//
//  Created by Jonás López Mesa on 10/04/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "pila.hpp"
using namespace std;


pila_t::pila_t(unsigned int sz):
top_(0),
vector_(sz){ }

pila_t::~pila_t(){
    top_ = 0;
}

bool pila_t::empty(){
    return top_ == 0;
}

bool pila_t::full(){
    if (top_ == vector_.get_sz()) {
        return true;
    } else {
        return false;
    }
    //return frente_ - final_ >= vector_.get_sz()-1;
}

void pila_t::insertar(char dato){
    if (!full()) {
        top_++;
        vector_.set_dato(top_, dato);
        cout << "quedan " << vector_.get_sz()-top_ << " espacios" << endl;
    }
}

char pila_t::extraer(){
    if (!empty()) {
        char aux = vector_.get_dato(top_);
        top_--;
        return aux;
    }
}