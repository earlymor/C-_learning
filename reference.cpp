#include <iostream>
using namespace std;
void swap(int &a, int &b) {
  int t = a;
  a = b;
  b = t;
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
}
int main() {
  int a = 10;
  int c = 30;
  int &b = a; // b是对a的别名，本质是指针常量
  // 即int &a=b; => int *const a = &b;
  b = 20;
  // 即a=10;=>*a=10;
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  swap(a, c);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  return 0;
}