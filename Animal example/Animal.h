#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
    public:
    virtual ~Animal() {} // virtual destructor
    virtual void makeSound() = 0;
};


#endif