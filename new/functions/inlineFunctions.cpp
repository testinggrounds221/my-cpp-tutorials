#include <iostream>
using namespace std;

// Inline Functions are used when there are multiple func calls and each of them
// would require a control transfer which would be expensive in terms of time

// Instead, when inline func is used, the compiler just copies the function each
// and every time the func is called so that there would be no expensive control
// transfers

// Used in scenarios where the function to be called perform simple jobs and the
// main function has way too many function calls

inline bool checkPrime(int n);
void primeUptoNumber(int n);

int main() {
  int n;
  cout << "Enter number upto which Prime numbers to be found	"
          ":	";
  cin >> n;
  cout << "Prime Numbers upto given number are " << endl;
  primeUptoNumber(n);

  return 0;
}

inline bool checkPrime(int n) {
  bool isPrime = true;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}

void primeUptoNumber(int n) {
  for (int i = 2; i < n; i++) {
    if (checkPrime(i) == true) {
      cout << i << ", ";
    }
  }
  cout << endl;
}
