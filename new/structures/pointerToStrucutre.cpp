#include <iostream>
using namespace std;

// Structures -> class with data members

struct Person {
  char name[50];
  int age;
  double salary;
};

int main() {
  Person p1;
  Person *ptr = &p1;
  cout << "Name	:	" << endl;
  cin.getline(ptr->name, 100);

  cout << "Age	:	" << endl;
  cin >> ptr->age;

  cout << "Salary	:	" << endl;
  cin >> ptr->salary;

  cout << ptr->name << endl;
  cout << ptr->age << endl;
  cout << ptr->salary << endl;

  return 0;
}