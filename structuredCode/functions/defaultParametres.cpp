#include <iostream>
using namespace std;

// Default Parameters works the same way in Python.

void multiplicationTable(int tableOf, int tableUpto = 10) {
  for (int i = 1; i <= tableUpto; i++) {
    cout << tableOf << "	*	" << i << "	=	" << tableOf * i
         << endl;
  }
}

int main() {
  int n, m;
  cout << "Enter Number whoose Multiplication Table to be printed	"
          ":	";
  cin >> m;
  cout << "Enter Number upto which Multiplication Table to be "
          "printed	:	";
  cin >> n;
  cout << "TABLES	:	 " << endl;
  if (n >= 30) {
    cout << "The Upto cannot be greater than 30! So the program will run with "
            "default config"
         << endl;
    multiplicationTable(m);
  } else
    multiplicationTable(m, n);

  return 0;
}