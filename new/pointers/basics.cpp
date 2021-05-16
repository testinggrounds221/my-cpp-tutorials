#include <iostream>
using namespace std;

int main() {
  int int_var = 5;
  int int_var2 = 15;

  int *int_pointer = &int_var;
  int *int_pointer2 = &int_var2;

  cout << "Before Change" << endl;
  cout << "Value of var	:	" << int_var << endl;
  cout << "Address of var	:	" << int_pointer << endl;
  cout << "Value of var through Pointers:	" << *int_pointer << endl;
  *int_pointer = *int_pointer2;
  cout << "After Change" << endl;
  cout << "Value of var	:	" << int_var << endl;
  cout << "Address of var	:	" << int_pointer << endl;
  cout << "Value of var through Pointers:	" << *int_pointer << endl;

  return 0;
}