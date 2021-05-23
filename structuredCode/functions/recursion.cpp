#include <iostream>
using namespace std;

int sum(int n) {
  if (n != 0)
    return n + sum(n - 1);
  else
    return n;
}

int main() {
  cout << sum(6) << endl;
  return 0;
}
