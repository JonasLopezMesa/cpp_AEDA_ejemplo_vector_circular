//
//  pila.hpp
//  Práctica_4
//
//  Created by Jonás López Mesa on 10/04/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Pra_ctica_4_pila_hpp
#define Pra_ctica_4_pila_hpp
#include "vector_circular.hpp"

class pila_t{
    v_c_t vector_;
    int top_;
public:
    pila_t(unsigned int sz);
    ~pila_t();
    bool full();
    bool empty();
    void insertar(char dato);
    char extraer();
};


#endif
