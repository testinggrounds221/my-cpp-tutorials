#include <iostream>
using namespace std;

class Complex {
 private:
  int real;
  int imag;

 public:
  Complex(int r = 0, int i = 0) {
    real = r;
    imag = i;
  }
  Complex operator+(Complex c) { return Complex(real + c.real, imag + c.imag); }
  Complex operator-(Complex c) { return Complex(real - c.real, imag - c.imag); }
  void printComplex() { cout << real << " + " << imag << "i" << endl; }
};

class Weight {
 private:
  int weight;

 public:
  Weight(int w = 0) { weight = w; }
  void printWeight() { cout << "The Weight is " << weight << endl; }

  Weight operator++() { return Weight(++weight); }
  Weight operator++(int) { return Weight(weight++); }
  Weight operator--() { return Weight(--weight); }
  Weight operator--(int) { return Weight(weight--); }
};

int main() {
  (Complex(1, 4) + Complex(2, 5) + Complex(3, 6)).printComplex();
  (Complex(1, 4) + Complex(2, 5) - Complex(3, 6)).printComplex();

  Weight w(10);

  (w++).printWeight();
  (++w).printWeight();

  (w--).printWeight();
  (--w).printWeight();

  return 0;
}
