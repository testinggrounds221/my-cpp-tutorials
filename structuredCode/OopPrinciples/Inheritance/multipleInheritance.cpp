#include <iostream>
using namespace std;

class A {
 public:
  void print() { cout << "Print Function of class A" << endl; }
};

class B {
 public:
  void print() { cout << "Print Function of class B" << endl; }
};

class derivedClass : public A, public B {
 public:
  void print() {
    A::print();
    B::print();
    cout << "Function Overriding :)" << endl;
  }
};

int main() {
  derivedClass derivedObject;

  derivedObject.print();

  return 0;
}