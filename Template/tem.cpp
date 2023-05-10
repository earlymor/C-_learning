#include <iostream>
using namespace std;
template <typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 10;
    int b = 20;
    cout <<"a="<<a<<endl;
    cout <<"b="<<b<<endl;
    mySwap(a,b);

    cout <<"a="<<a<<endl;
    cout <<"b="<<b<<endl;
}