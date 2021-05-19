#include <iostream>
using namespace std;

class ComplexNumer {
 private:
  int real;
  float imag;

 public:
  ComplexNumer() {
    real = 0;
    imag = 0.0;
  }
  ComplexNumer(int re, float im) {
    real = re;
    imag = im;
  }
  void display() { cout << real << " + " << imag << "i" << endl; }
  int getRealPart() { return real; }
  float getImaginaryPart() { return imag; }
};

ComplexNumer addition(ComplexNumer &obj1, ComplexNumer &obj2) {
  ComplexNumer obj3(obj1.getRealPart() + obj2.getRealPart(),
                    obj1.getImaginaryPart() + obj2.getImaginaryPart());
  return obj3;
}

int main() {
  ComplexNumer c1(5, 2.3);
  ComplexNumer c2(5, 2.3);
  c1.display();
  c2.display();
  cout << "Addition	:	";
  addition(c1, c2).display();

  ComplexNumer *c1_pointer = &c1;
  ComplexNumer *c2_pointer = &c2;

  c1_pointer->display();
  c2_pointer->display();

  return 0;
}
