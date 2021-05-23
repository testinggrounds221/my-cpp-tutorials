#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
  unsigned long long fac = 1;
  for (int i = 1; i <= n; i++) {
    fac *= i;
  }
  return fac;
}

bool checkPrime(int n) {
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

void primeInRange(int m, int n) {
  for (int i = m; i < n; i++) {
    if (checkPrime(i) == true) {
      cout << i << ", ";
    }
  }
  cout << endl;
}

void multiplicationTable(int tableOf, int tableUpto) {
  for (int i = 1; i <= tableUpto; i++) {
    cout << tableOf << "	*	" << i << "	=	" << tableOf * i
         << endl;
  }
}

int main() {
  int inp;
  int n;
  int m;
  cout << "Code to demonstrate For Loop in C++" << endl << endl;

  cout << "1.	Print Factorial of Number" << endl;
  cout << "2.	Print Prime Numbers Upto Given Number" << endl;
  cout << "3.	Prime Numbers In Given Range" << endl;
  cout << "4.	Print Multiplication Tables" << endl << endl;
  cout << "Submit your choice	:	";
  cin >> inp;
  switch (inp) {
    case 1:
      cout << "Enter number of which factorial to be found	:	";
      cin >> n;
      cout << "The factorial of given number is " << factorial(n) << endl;
      break;

    case 2:
      cout << "Enter number upto which Prime numbers to be found	"
              ":	";
      cin >> n;
      cout << "Prime Numbers upto given number are " << endl;
      primeUptoNumber(n);
      break;

    case 3:
      cout << "Enter Upper bound of Required Prime Range	:	";
      cin >> m;
      cout << "Enter Lower bound of Required Prime Range	:	";
      cin >> n;
      cout << "Prime Numbers in given range are " << endl;
      primeInRange(m, n);
      break;

    case 4:
      cout << "Enter Number whoose Multiplication Table to be printed	"
              ":	";
      cin >> m;
      cout << "Enter Number upto which Multiplication Table to be "
              "printed	:	";
      cin >> n;
      cout << "TABLE	:	 " << endl;
      multiplicationTable(m, n);
      break;

    default:
      cout << "Enter Valid Choice";
      break;
  }
}
