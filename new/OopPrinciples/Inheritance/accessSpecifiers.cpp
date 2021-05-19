#include <iostream>
using namespace std;

class MyBaseClass {
 public:
  int pblc;
  MyBaseClass() {
    pblc = 5;
    proc = 10;
    priv = 15;
  }
  int getProtectedValue() { return proc; }
  int getPrivateValue() { return priv; }

 protected:
  int proc;

 private:
  int priv;
};

class MyDerivedClass : public MyBaseClass {};

void directObjectCreation(MyBaseClass obj) {
  cout << "DIRECT OBJECT CREATION	:	" << endl;
  cout << "Public		:	" << obj.pblc << endl;

  //   cout << "Protected	:	" << obj.proc;
  //   Not Possible -> Outside func cannot
  //   access PROTECTED unless called from Derived Class
  cout << "Protected	:	" << obj.getProtectedValue() << endl;

  //   cout << "Private	:	" << obj.priv;
  //   Not Possible -> Outside func cannot
  //   access PRIVATE unless called from Orignal Class
  cout << "Private		:	" << obj.getPrivateValue() << endl
       << endl;
}

int main() {
  MyBaseClass directObj;
  directObjectCreation(directObj);

  return 0;
}