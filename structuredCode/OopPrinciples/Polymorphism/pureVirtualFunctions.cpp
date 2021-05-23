#include <iostream>
using namespace std;

class Shape {
 public:
  virtual int getArea() = 0;
};

class Rectangle : public Shape {
 public:
  Rectangle() {
    length = 0;
    breadth = 0;
  }
  Rectangle(int l, int b) {
    length = l;
    breadth = b;
  }
  int length;
  int breadth;
  int getArea() { return length * breadth; }
};

class Circle : public Shape {
 public:
  Circle() { radius = 0; }
  Circle(int r) { radius = r; }
  int radius;
  int getArea() { return 2 * 3 * radius; }
};

int main() {
  Shape *shape_pointer;

  Rectangle rectangle_object(2, 3);
  Circle circle_object(7);

  shape_pointer = &rectangle_object;
  cout << shape_pointer->getArea() << endl;

  shape_pointer = &circle_object;
  cout << shape_pointer->getArea() << endl;

  return 0;
}