#include <iostream>
using namespace std;

int main() {
  int x, y;
  cout << "Enter Value x	:	\n";
  cin >> x;

  cout << "Enter Value y	:	\n";
  cin >> y;

  x = x + y;
  y = x - y;
  x = x - y;

  cout << "The value of x after swapping	:	" << x << endl;
  cout << "The value of y after swapping	:	" << y << endl;

  cout << "x = x + y\ny = x - y\nx = x - y";

  return 0;
}
