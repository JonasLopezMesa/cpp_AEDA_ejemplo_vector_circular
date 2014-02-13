//
//  buffer.hpp
//  Práctica_4
//
//  Created by Jonás López Mesa on 10/04/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Pra_ctica_4_buffer_hpp
#define Pra_ctica_4_buffer_hpp
#include "cola.hpp"

class buffer_t{
    cola_t cola_;
public:
    buffer_t(unsigned int sz);
    ~buffer_t();
    void flush();
    void insertar(char dato);
};


#endif
