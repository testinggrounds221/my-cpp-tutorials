#include <iostream>
using namespace std;

class level0 {
 public:
  int val;
};

class A : virtual public level0 {  // virtual for maintaining a single copy in
                                   // last lvl class
 public:
  A() { val = 1; }
  void print() { cout << "Print Function of class A" << endl; }
  int getVal() { return val; }
};

class B : virtual public level0 {  // virtual for maintaining a single copy in
                                   // last lvl class

 public:
  B() { val = 2; }
  void print() { cout << "Print Function of class B" << endl; }
  int getVal() { return val; }
};

class derivedClass : public A, public B {
 public:
  void print() {// Since Virtual key word used, The last most inherited	
    cout << A::getVal() << endl;
    cout << B::getVal() << endl;
  }
};

int main() {
  derivedClass derivedObject;

  derivedObject.print();

  return 0;
}