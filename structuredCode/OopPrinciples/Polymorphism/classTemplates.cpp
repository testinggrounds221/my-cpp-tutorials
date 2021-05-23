#include <iostream>
using namespace std;

template <typename T>
class Weight {
 private:
  T w;

 public:
  Weight(T n = 0) { w = n; }
  T getWeight() { return w; }
  void printWeight() { cout << w << endl; }

  void setData(T n) { w = n; }
  T setData() { return w; }
};

int main() {
  Weight<int> wInt(5);
  cout << "Integer Weight : " << wInt.getWeight();

  Weight<double> wDouble(4.56666);
  cout << "Double Weight : " << wDouble.getWeight();

  return 0;
}