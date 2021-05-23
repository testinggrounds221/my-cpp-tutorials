#include <iostream>
using namespace std;

class Animal {
 public:
  virtual void eat() { cout << " Makes sound" << endl; }
};

class Dog : public Animal {
 public:
  void eat() { cout << " Eats Dog food" << endl; }
};

class Cat : public Animal {
 public:
  void eat() { cout << " Eats Cat food" << endl; }
};

void meal(Animal *animal_pointer) { animal_pointer->eat(); }

int main() {
  Animal *animal_pointer;

  Dog dog_object;
  animal_pointer = &dog_object;
  meal(animal_pointer);

  Cat cat_object;
  animal_pointer = &cat_object;
  meal(animal_pointer);
  // SEE HERE..... NO NEED TO CREATE EXTRA POINTERS OR FUNCTIONS TO IMPLEMENT
  return 0;
}