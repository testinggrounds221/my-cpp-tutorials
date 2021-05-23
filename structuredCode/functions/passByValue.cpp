#include <iostream>
using namespace std;

// Copies actual values of arguments(during call) to the formal parametre of the
// function... Instance variables are created

// variables inside function has only scope within function

// Changes made to the parametres have no effect on the argument

// Formal and actual parametres have independent memory addressess

// Default pass by C++ -> Pass by Value

void passbyValue(int a, int b) {
  int z = a;
  a = b;
  b = z;
}

int main() {
  int a = 5;
  int b = 6;

  cout << "Values before swapping are a = " << a << " and  b =" << b << endl;

  passbyValue(a, b);

  cout << "Values before swapping are a = " << a << " and  b =" << b << endl;

  return 0;
}