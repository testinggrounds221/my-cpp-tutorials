#include <iostream>
using namespace std;

template <typename T>
T addSame(T x, T y) {
  return x + y;
}

template <typename T, typename U>
U addDiff(T x, U y) {
  return x + y;
}

// int addSame(int x, int y) { return x + y; }

// float addSame(float x, float y) { return x + y; }

// double addSame(double x, double y) { return x + y; }

int main() {
  cout << "Addition using Templates	Double Type:	"
       << addSame<double>(5.44, 454.3222) << endl;
  cout << "Addition using Templates	Float Type:	"
       << addSame<float>(5.44f, 454.3222f) << endl;

  cout << "Addition using Templates	Double and Int Types:	"
       << addDiff<double, int>(5.99, 45) << endl;
  return 0;
}