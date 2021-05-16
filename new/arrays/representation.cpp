#include <iostream>
using namespace std;

int main() {
  //   int arr[5] = {};
  //   cout << "Input and Output 5 elements of Array (1D Array)" << endl;
  //   for (int i = 0; i <= 5; i++) {
  //     cout << "Input Element " << i << "	:	";
  //     cin >> arr[i];
  //   }
  //   cout << "Numbers entered" << endl;
  //   for (int i = 0; i <= 5; i++) {
  //     cout << "Element " << i << "	=	" << arr[i] << endl;
  //   }

  //   cout << "Output a Two Dimensional array" << endl;
  //   int arr2d0[2][3];                     //	Declaration
  //   int arr2d1[2][2] = {1, 2, 3, 4};      // Automatic Initialization
  //   int arr2d2[2][2] = {{5, 6}, {7, 8}};  // Explicit Initialization
  //   int arr2d3[3][5] = {{1, 2, 3, 4, 5},
  //                       {6, 7, 8, 9, 0},
  //                       {7, 9, 11, 13, 5}};  // Explicit Initialization

  //   for (int j = 0; j < 3; j++) {
  //     for (int k = 0; k < 5; k++) {
  //       //   cout << arr2d1[j][k] << " " << arr2d2[j][k] << endl;
  //       cout << arr2d3[j][k] << "		";
  //     }
  //     cout << endl;
  //   }

  cout << "Input and Output a Two Dimensional array" << endl;

  int arr2d4[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr2d4[i][j];
    }
    cout << endl;
  }
  cout << endl << "The values are	" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << arr2d4[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}