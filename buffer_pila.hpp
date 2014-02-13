//
//  buffer_pila.hpp
//  Práctica_4
//
//  Created by Jonás López Mesa on 10/04/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Pra_ctica_4_buffer_pila_hpp
#define Pra_ctica_4_buffer_pila_hpp
#include "pila.hpp"

class buffer_tp{
    pila_t pila_;
public:
    buffer_tp(unsigned int sz);
    ~buffer_tp();
    void flush();
    void insertar(char dato);
};

#endif
