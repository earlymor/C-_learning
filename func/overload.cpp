#include <iostream>
using namespace std;
/* 函数重载
1.函数名相同
2.作用域相同
3.参数类型不同或参数个数不同,顺序不同
*/
void overload(int a, double b) { cout << "int double" << endl; }
void overload(double a, int b) { cout << "double int" << endl; }
int main() {
  overload(2.0, 1);
  overload(1, 2.0);
}