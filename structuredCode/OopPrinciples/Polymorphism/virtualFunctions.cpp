#include <iostream>
using namespace std;

// Member function defined in base class and redefined in Derived Class

class myBase {
 public:
  void show() { cout << "Base class\n"; }
  virtual void print() { cout << "Base class Print Function called\n"; }
};

class MyDerived : public myBase {
 public:
  void show() { cout << "Derived class\n"; }
  void print() {
    cout << "Derived class Print Function called\n";
  }  // Automatically Virtual
};
int main() {
  myBase *baseClass_ptr;

  MyDerived derivedObj;
  baseClass_ptr = &derivedObj;

  baseClass_ptr->show();
  baseClass_ptr->print();

  return 0;
}