#include <iostream>
using namespace std;

int main() {
  int inp, rev, temp;
  rev = 0;
  cout << "Enter Number to check Palindrome	:	" << endl;
  cin >> inp;
  temp = inp;
  while (inp > 0) {
    rev = (rev * 10) + (inp % 10);
    inp = inp / 10;
  }
  //   cout << "Reversed Number	:	" << rev << endl;
  if (rev == temp) {
    cout << "The number is palindrome" << endl;
  } else {
    cout << "The number is not a palindrome number" << endl;
  }
  return 0;
}