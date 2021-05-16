#include <fstream>
#include <iostream>

using namespace std;

// A stream is an ABSTRACTION that represents a DEVICE on which input and output
// operations are performed. A stream can basically be represented as a SOURCE
// or DESTINATION of characters of INDEFENITE length.

// ofstream : This data type represents the output file stream and is used to
// create files and to write information to files.

// ifstream : This data type represents the input file stream and is used to
// read information from files.

// fstream : This data type represents the file stream generally, and has the
// capabilities of both ofstream and ifstream which means it can create files,
// write information to files, and read information from files.

int main() {
  char inp_arr[100];
  cout << "FILE WRITE OPERATIONS BEGIN" << endl;

  cout << "Enter Characters	:	";
  cin.getline(inp_arr, 100);

  ofstream myfile(
      "my_input.txt",
      ios::app);  // Appends, see also fstream("file").getline(arr,100,ios::out)
  myfile << inp_arr;
  myfile.close();

  cout << "FILE WRITE OPERATIONS COMPLETED" << endl;

  char out_arr[100];
  cout << "FILE READ OPERATIONS BEGIN" << endl;

  cout << "File Contents Are	:	";

  ifstream myfile2("my_input.txt");
  myfile2.get(out_arr, 100);
  myfile.close();
  cout << out_arr << endl;
  cout << "FILE READ OPERATIONS COMPLETED" << endl;

  return 0;
}
