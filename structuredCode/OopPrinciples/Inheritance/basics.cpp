#include <iostream>
using namespace std;

class Shape {
 protected:
  int width;
  int height;
  Shape() {
    width = 0;
    height = 0;
  }

 public:
  void setWidth(int h) { width = h; }
  void setHeight(int h) { height = h; }
};

class Rectangle : public Shape {
 public:
  int getArea() { return width * height; }
};

int main() {
  Rectangle rect;
  rect.setWidth(7);
  rect.setHeight(5);
  cout << rect.getArea() << endl;

  return 0;
}
