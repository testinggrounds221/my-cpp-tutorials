#include <iostream>
#include <string>

using namespace std;

class Person {
 private:
  string name;
  int age;
  long salary;

 public:
  void setInfo(string na, int ag, long sa) {
    name = na;
    age = ag;
    salary = sa;
  }
  void displayInfo() {
    cout << "Name	:	" << endl;
    cout << name << endl;

    cout << "Age	:	" << endl;
    cout << age << endl;

    cout << "Salary	:	" << endl;
    cout << salary << endl << endl;
  }
};

int main() {
  Person person_array[2];
  for (int i = 0; i < 2; i++) {
    string name;
    int age;
    long salary;
    cout << "\nEnter Name	:	" << endl;
    cin >> name;

    cout << "\nEnter Age	:	" << endl;
    cin >> age;

    cout << "\nEnter Salary	:	" << endl;
    cin >> salary;

    person_array[i].setInfo(name, age, salary);
  }

  cout << "Details got" << endl;

  for (int i = 0; i < 2; i++) {
    cout << "Person " << i << "'s Details	:	" << endl;
    person_array[i].displayInfo();
  }

  return 0;
}