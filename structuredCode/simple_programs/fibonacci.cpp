#include <iostream>
using namespace std;

int main() {
  int a, b, c, n;
  a = 0;
  b = 1;
  cout << "Enter Number of Fibonacci Terms	:	";
  cin >> n;
  cout << endl << a << endl;

  for (int i = 0; i <= n; i++) {
    cout << b << endl;
    c = b + a;
    a = b;
    b = c;
  }
  return 0;
}