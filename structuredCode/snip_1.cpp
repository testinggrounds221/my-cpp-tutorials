#include <iostream>
using namespace std;
int main() {

  int x = 5;
  //   cin >> x;
  char ch;
  cin >> ch;
  while (ch == 'a') {
    cout << "\nI am a Programmer" << endl << "Enter character Again";
    cin >> ch;
  }
  do {
    cin >> ch;
    cout << "Hey there";

  } while (ch == 'b');

  for (int i = 0; i <= 5; i++) {
    cout << "I am a Programmer\n";
  }

  for (int i = 0; i <= 5; i++) {
    cout << "\n5 * " << i << " = " << (5 * i);
  }
  cout << "\n";

  switch (x) {
    case 1:
      cout << "One";
      break;
    case 2:
      cout << "Two";
      break;

    default:
      break;
  }

  if (x < 0) {
    cout << "\nNeagtive";
  } else if (x > 0) {
    cout << "\nPositive";
  } else {
    cout << "\nzero";
  }
  // for (i = 0; i<=x;i++) {
  // 	cout<<i<<"\n";
  // }
}
