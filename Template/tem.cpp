#include <string>
#include <iostream>
using namespace std;
template <typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
    cout << "T的类型为" << typeid(T).name() << endl;
}
// 指定传入类型(常用)

// 参数模板化

// 类模板化
int main() {
    string a = "10";
    string b = "20";
    cout <<"a="<<a<<endl;
    cout <<"b="<<b<<endl;
    mySwap(a,b);

    cout <<"a="<<a<<endl;
    cout <<"b="<<b<<endl;
}