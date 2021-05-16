#include <iostream>
using namespace std;

// watch youtube :) for reference AND CONCEPTS

void passbyAddress(int *x, int *y) {
  int z = *x;
  *x = *y;
  *y = z;
}

int main() {
  int a = 5;
  int b = 6;

  cout << "Values before swapping are a = " << a << " and  b = " << b << endl;

  passbyAddress(&a, &b);

  cout << "Values before swapping are a = " << a << " and  b = " << b << endl;

  return 0;
}
