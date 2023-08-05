#include <iostream>
using namespace std;
int main() {
    long double ld = 3.1415926;
    int a{ld}, b = {ld};  // 警告：narrowing conversion of ‘ld’ from ‘long
                          // double’ to ‘int’
    int c(ld), d = ld;  // 无警告但同样丢失部分值
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "c:" << c << endl;
    cout << "d:" << d << endl;
}