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
    cout << "\nEnter Name	:	" << endl;
    cin >> person_array[i].name;

    cout << "\nEnter Age	:	" << endl;
    cin >> person_array[i].age;

    cout << "\nEnter Salary	:	" << endl;
    cin >> person_array[i].salary;
  }

  cout << "Details got" << endl;

  for (int i = 0; i < 2; i++) {
    cout << "Person " << i << "'s Name	:	" << endl;
    cout << person_array[i].name << endl;

    cout << "Person " << i << "'s Age	:	" << endl;
    cout << person_array[i].age << endl;

    cout << "Person " << i << "'s Salary	:	" << endl;
    cout << person_array[i].salary << endl << endl;
  }

  return 0;
}