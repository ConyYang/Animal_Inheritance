 #include <childanimal.h>

Dog::Dog(string n, COLOR c, string o): Mammal(n, c), owner(o) {
    cout << "Owner: " << owner << endl;
    cout << "Dog object created." << endl;
}
Dog::~Dog() {
    cout << "destructing Dog object " << endl ;
}
void Dog::speak() const {
    cout << "Woof"<< endl ;
}
void Dog::move() const {
    cout << "Walk"<< endl;
}
void Dog::eat() const {
    cout << "Dog eats bone"<< endl;
}


Cat::Cat(string n, COLOR c, string o): Mammal(n, c), owner(o) {
    cout << "Owner: " << owner << endl;
    cout << "Cat object created." << endl;
}
Cat::~Cat() {
    cout << "destructing Cat object " << endl ;
}
void Cat::speak() const {
    cout << "Meow"<< endl ;
}
void Cat::move() const {
    cout << "Jump"<< endl;
}
void Cat::eat() const {
    cout << "Cat eats fish"<< endl;
}


Lion::Lion(string n, COLOR c): Mammal(n, c) {
    cout << "Lion object created." << endl;
}
Lion::~Lion() {
    cout << "destructing Lion object " << endl ;
}
void Lion::speak() const {
    cout << "Roar"<< endl ;
}
void Lion::move() const {
    cout << "Run"<< endl;
}
void Lion::eat() const {
    cout << "Lion eats meat"<< endl;
}
