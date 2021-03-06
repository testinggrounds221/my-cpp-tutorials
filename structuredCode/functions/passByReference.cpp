#include <iostream>
using namespace std;

// Copies reference of arguments(during call) to the formal parametre of the
// function...

// reference variables(&x,&y) inside function has only scope within function

// Changes made to the parametres have affect the argument

// Formal and actual parametres have same memory addressess... New names are
// being assigned to the previous memory address

//& implies that we take reference of passed arguments and has nothing to do
// with pointers
void passbyReference(int &x, int &y) {
  // x and y are new names given to mem add of a and b resp.
  int z = x;
  x = y;
  y = z;
}
// Scope of x and y are over here... but the swap is done where a and b were
// used as names for mem address

int main() {
  int a = 5;
  int b = 6;

  cout << "Values before swapping are a = " << a << " and  b = " << b << endl;

  passbyReference(a, b);

  cout << "Values before swapping are a = " << a << " and  b = " << b << endl;

  return 0;
}