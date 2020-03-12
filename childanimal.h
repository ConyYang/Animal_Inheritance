#ifndef CHILDANIMAL_H
#define CHILDANIMAL_H

#include <iostream>
#include <string>
using namespace std;
#include <animal.h>

class Dog: public Mammal {
public:
    Dog(string n, COLOR c, string o);
    ~Dog();
    void speak() const;
    void move() const;
    void eat() const;
private:
    string owner;
};

class Cat: public Mammal {
public:
    Cat(string n, COLOR c, string o);
    ~Cat();
    void speak() const;
    void move() const;
    void eat() const;
private:
    string owner;
};

class Lion: public Mammal {
public:
    Lion(string n, COLOR c);
    ~Lion();
    void speak() const;
    void move() const;
    void eat() const;
};

#endif
