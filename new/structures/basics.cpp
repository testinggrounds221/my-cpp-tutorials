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
  cout << "Name	:	" << endl;
  cin.getline(p1.name, 100);

  cout << "Age	:	" << endl;
  cin >> p1.age;

  cout << "Salary	:	" << endl;
  cin >> p1.salary;

  cout << p1.name << endl;
  cout << p1.age << endl;
  cout << p1.salary << endl;

  return 0;
}