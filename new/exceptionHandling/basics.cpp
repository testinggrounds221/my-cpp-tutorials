#include <iostream>
using namespace std;

// Exception handling in cpp

// try -> Scope that looks for exception
// catch -> Scope that decides what to do when certain exception is thrown

int main() {
  int num = 0;
  int den, result;
  cout << "Enter Numerator and Denominator	:	";
  cin >> num >> den;

  try {
    if (den == 0) {
      throw den;
    }
    cout << num / den;
  } catch (int ex) {
    cout << "Zero Division Not Allowed  ";
  }
  cout << "Here";
  return 0;
}