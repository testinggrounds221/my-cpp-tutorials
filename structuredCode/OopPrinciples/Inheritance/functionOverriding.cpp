#include <iostream>
using namespace std;

// Overloading
// Possible only through Inheritance
// Feature of Polymorphism
// Refer Overloading Above

// Overriding
// Redefining the same function in the Derived Class

// The function was defined already witht the same name and number,types of
// parametresdefined in Base class

// Enables Specific Implementation of same function

class Animal {
 public:
  void makeSound() { cout << " Makes sound" << endl; }
};

class Dog : public Animal {
 public:
  void makeSound() {
    cout << "\nDogs";
    Animal::makeSound();
    cout << " Bark" << endl;
  }
};

class Cat : public Animal {
 public:
  void makeSound() {
    cout << "\n Cats" << endl;

    Animal::makeSound();
    cout << " Meow" << endl;
  }
};

int main() {
  Animal a;
  a.makeSound();

  Dog d;
  d.makeSound();

  Cat c;
  c.makeSound();

  return 0;
}