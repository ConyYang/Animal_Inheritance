#include <animal.h>

Animal::Animal() : _name("unknown") {
    cout << "constructing Animal object "<< _name << endl ;
}
Animal::Animal(string n, COLOR c) {
    _name = n;
    _color = c;
    cout << "constructing Animal object:" << endl;
    cout << "Name: " << _name << endl;
    if (_color == Green) {
        cout << "Color: Green" << endl;
    } else if (_color == Blue) {
        cout << "Color: Blue" << endl;
    } else if (_color == White) {
        cout << "Color: White" << endl;
    } else if (_color == Black) {
        cout << "Color: Black" << endl;
    } else if (_color == Brown) {
        cout << "Color: Brown" << endl;
    }
}
Animal::~Animal() {
    cout << "destructing Animal object "<< _name << endl ;
}
void Animal::speak() const {
    cout << "Animal speaks "<< endl ;
}


Mammal::Mammal(string n, COLOR c): Animal(n, c) {
    cout << "Mammal object created." << endl;
}
Mammal::~Mammal() {
    cout << "destructing Mammal object " << endl ;
}

void Mammal::eat() const {
    cout << "Mammal eat " << endl ;
}
void Mammal::move() const {
    cout << "Move"<< endl;
}
