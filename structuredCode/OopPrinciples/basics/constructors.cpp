#include <iostream>
#include <string>

using namespace std;

class Person {
 private:
  string name;
  int age;
  long salary;

 public:
  Person() {
    salary = 12222.33;
    cout << "Default Constructor Called" << endl;
  }                            // Constructor Overloading
  Person(string na, int ag) {  // Parameterized Const
    name = na;
    age = ag;
    cout << "Parameterized Constructor Called" << endl;
  }

  Person(Person &obj) {  // Copy Const
    name = obj.name;
    age = obj.age;
    salary = obj.salary;
    cout << "Copy Constructor Called" << endl;
  }
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

  Person p1;  // Default Const
  Person p2("Name 1", 20);
  Person p3 = p2;
  person_array[0] = p1;
  person_array[1] = p2;
  //   for (int i = 0; i < 2; i++) {
  //     string name;
  //     int age;
  //     long salary;
  //     cout << "\nEnter Name	:	" << endl;
  //     cin >> name;

  //     cout << "\nEnter Age	:	" << endl;
  //     cin >> age;

  //     cout << "\nEnter Salary	:	" << endl;
  //     cin >> salary;

  //     person_array[i].setInfo(name, age, salary);
  //   }

  //   cout << "Details got" << endl;

  for (int i = 0; i < 3; i++) {
    cout << "Person " << i << "'s Details	:	" << endl;
    person_array[i].displayInfo();
  }

  return 0;
}