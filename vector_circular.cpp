//
//  vector_circular.cpp
//  Práctica_4
//
//  Created by Jonás López Mesa on 10/04/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "vector_circular.hpp"

v_c_t::v_c_t(unsigned int sz):
sz_(sz),
base_(NULL)
{
    base_ = new char[sz];
}

v_c_t::~v_c_t(){
    delete [] base_;
    base_ = NULL;
    sz_ = 0;
}

unsigned int v_c_t::get_sz(){
    return sz_;
}

char v_c_t::get_dato(unsigned int i){
    return base_[i % sz_];
}

void v_c_t::set_dato(unsigned int i, char dato){
    base_[i % sz_] = dato;
}
