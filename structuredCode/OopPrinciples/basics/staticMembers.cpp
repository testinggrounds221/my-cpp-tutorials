#include <iostream>
using namespace std;

// Shared by all objects of the class
class myClass {
 public:
  int x;
  static int count;
  myClass() {
    x = 0;
    count += 1;
  }
  static int getCount() { return count; }
};

int myClass ::count = 0;
int main() {
  int i = 0;
  for (myClass ::count; myClass ::count < 5;) {
    myClass obj;
    cout << myClass ::getCount() << endl;
  }

  return 0;
}