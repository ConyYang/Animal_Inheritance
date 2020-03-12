#include <iostream>
#include <string>
using namespace std;
#include <animal.h>
#include <childanimal.h>

const int ARRAY_SIZE = 20;

int main() {
    Animal** animals = new Animal*[ARRAY_SIZE];
    int i = 0;
    string name;
    COLOR color;
    string colorString;
    bool colorValid;
    string owner;
    while (true) {
        colorValid = false;
        int choice;
        cout << "Select the animal to send to Zoo:" << endl;
        cout << "(1) Dog (2) Cat (3) Lion (4) Move all animals (5) Quit" << endl;
        cin >> choice;
        if (choice == 4) {
            for (int j = 0; j < i; j++) {
                Animal *a = animals[j];
                a->move();
                a->speak();
                a->eat();
            }
        } else if (choice == 5) {
            for (int j = 0; j < i; j++) {
                delete dynamic_cast<Mammal*>(animals[j]);
            }
            delete [] animals;
            return 0;
        } else if (choice >= 1 && choice <= 3) {
            if (i >= ARRAY_SIZE) {
                cout << "Array is full!" << endl;
                continue;
            }
            cout << "Enter name: " << endl;
            cin >> name;
            cout << "Enter color: " << endl;
            cin >> colorString;
            if (colorString.compare("Green") == 0) {
                color = Green;
                colorValid = true;
            } else if (colorString.compare("Blue") == 0) {
                color = Blue;
                colorValid = true;
            } else if (colorString.compare("White") == 0) {
                color = White;
                colorValid = true;
            } else if (colorString.compare("Black") == 0) {
                color = Black;
                colorValid = true;
            } else if (colorString.compare("Brown") == 0) {
                color = Brown;
                colorValid = true;
            }
            while (!colorValid) {
                cout << "Enter color: " << endl;
                cin >> colorString;
                if (colorString.compare("Green") == 0) {
                    color = Green;
                    colorValid = true;
                } else if (colorString.compare("Blue") == 0) {
                    color = Blue;
                    colorValid = true;
                } else if (colorString.compare("White") == 0) {
                    color = White;
                    colorValid = true;
                } else if (colorString.compare("Black") == 0) {
                    color = Black;
                    colorValid = true;
                } else if (colorString.compare("Brown") == 0) {
                    color = Brown;
                    colorValid = true;
                }
            }
            if (choice == 1 || choice == 2) {
                cout << "Enter owner: " << endl;
                cin >> owner;
            }
            switch (choice) {
                case 1: animals[i++] = new Dog(name, color, owner); break;
                case 2: animals[i++] = new Cat(name, color, owner); break;
                case 3: animals[i++] = new Lion(name, color); break;
            }
        }
    }
    cout << "Program exiting .... "<< endl ;
    return 0;
}
