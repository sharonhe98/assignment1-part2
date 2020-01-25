// lang CwC
#pragma once
#include <stdlib.h>

class Object {
    public:

    size_t hash_;

    // constructor initialize hash_
    Object() {
        hash_ = 0;
    }
    
    // return hash code for object
    virtual size_t hash() {
        /** calculates the hash code **/
    }

    // hash object function
    virtual size_t hash_me_() {
        /** ensures that this is an unsigned number by casting to size_t **/
    }

    // check if this object equals other object
    virtual bool equals(Object *other) {
        /** Checks if this Object is equal to other **/
    }

    // destructor called virtual for class with subclasses
    virtual ~Object() {}
};                                    