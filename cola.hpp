//
//  cola.hpp
//  Práctica_4
//
//  Created by Jonás López Mesa on 10/04/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Pra_ctica_4_cola_hpp
#define Pra_ctica_4_cola_hpp
#include "vector_circular.hpp"

class cola_t{
    v_c_t vector_;
    int frente_;
    int final_;
public:
    cola_t(unsigned int sz);
    ~cola_t();
    bool full();
    bool empty();
    void insertar(char dato);
    char extraer();
};

#endif
