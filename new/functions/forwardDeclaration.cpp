#include <iostream>
using namespace std;

unsigned long long factorial(int n);
//	 Here we are informing the compiler thath there is a function with such
// signature so that it does not throw an error beacuse func is defined after
// the calling
int main() {
  // Program to calculate fiba
  int n;
  cout << "Enter number of which factorial to be found	:	";
  cin >> n;
  cout << "The factorial of given number is " << factorial(n) << endl;
}

unsigned long long factorial(int n) {
  unsigned long long fac = 1;
  for (int i = 1; i <= n; i++) {
    fac *= i;
  }
  return fac;
}
