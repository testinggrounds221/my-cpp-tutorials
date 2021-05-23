#include <iostream>
#include <string>

using namespace std;

struct Person {
  string name;
  int age;
  long salary;
};

int main() {
  Person person_array[2];
  for (int i = 0; i < 2; i++) {
    Person *ptr = &person_array[i];
    cout << "\nEnter Name	:	" << endl;
    cin >> ptr->name;

    cout << "\nEnter Age	:	" << endl;
    cin >> ptr->age;

    cout << "\nEnter Salary	:	" << endl;
    cin >> ptr->salary;
  }

  cout << "Details got" << endl;

  for (int i = 0; i < 2; i++) {
    Person *ptr = &person_array[i];

    cout << "Person " << i << "'s Name	:	" << endl;
    cout << ptr->name << endl;

    cout << "Person " << i << "'s Age	:	" << endl;
    cout << ptr->age << endl;

    cout << "Person " << i << "'s Salary	:	" << endl;
    cout << ptr->salary << endl << endl;
  }

  return 0;
}