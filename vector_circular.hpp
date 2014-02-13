//
//  vector_circular.hpp
//  Práctica_4
//
//  Created by Jonás López Mesa on 10/04/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Pra_ctica_4_vector_circular_hpp
#define Pra_ctica_4_vector_circular_hpp

class v_c_t{
    char* base_;
    unsigned int sz_;
public:
    v_c_t(unsigned int sz);
    ~v_c_t();
    unsigned int get_sz();
    char get_dato(unsigned int i);
    void set_dato(unsigned int i, char dato);
};


#endif
