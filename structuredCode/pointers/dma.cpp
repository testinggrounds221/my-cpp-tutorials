#include <iostream>
using namespace std;

int main() {
  //	Without Pointers
  //   int size;
  //   cin >> size;
  //   int d_arr[size];
  //   for (int i = 0; i < size; i++) {
  //     cin >> d_arr[i];
  //   }

  //   for (int i = 0; i < size; i++) {
  //     cout << d_arr[i];
  //   }
  int size;
  int *ptr;
  cout << "Number of Elements	:	";
  cin >> size;
  ptr = new int[size];
  cout << "Enter Elements	:	";
  for (int i = 0; i < size; i++) {
    cin >> ptr[i];
  }
  cout << endl << "The Elements are	:	" << endl;
  for (int i = 0; i < size; i++) {
    cout << ptr[i];
  }

  return 0;
}