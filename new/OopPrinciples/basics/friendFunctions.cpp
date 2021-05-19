#include <iostream>
using namespace std;

class Distance {
 private:
  int meters;

 public:
  Distance() { meters = 0; }
  void addMetre(int n) { meters += n; }
  Distance(int m) { meters = m; }
  int getDistance() { return meters; }
  friend void addMetres(Distance &d, int addValue);
};

void addMetres(Distance &d, int addValule) { d.meters += addValule; }

int main() {
  Distance d(25);
  cout << d.getDistance() << endl;
  addMetres(d, 20);
  cout << d.getDistance() << endl;
  d.addMetre(20);
  cout << d.getDistance() << endl;

  return 0;
}