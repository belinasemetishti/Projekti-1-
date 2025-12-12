#include <iostream>
using namespace std;

int shuma(int a, int b) {
  return a + b;
}

int shuma(int a, int b, int c) {
  return a + b + c;
}

int shuma(int a, int b, int c, int d) {
  return a + b + c + d;
}

double shuma(double a, double b) {
  return a + b;
}

double shuma(double a, double b, double c) {
  return a + b + c;
}

double shuma(double a, double b, double c, double d) {
  return a + b + c + d;
}

int main() {
  int s2, s3, s4;

  s2 = shuma(3, 5);
  cout << "Shuma e dy numrave:" << s2 << endl;

  s3 = shuma(7, 12, 1);
  cout << "Shuma e tre numrave:" << s3 << endl;

  s4 = shuma(6, 1, 3, 5);
  cout << "Shuma e kater numrave:" << s4 << endl;

  return 0;
}
