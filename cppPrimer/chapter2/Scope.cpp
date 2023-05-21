#include <iostream>
int i = 42;
void refer() {
    int i = 0;
    int& val1 = i;
    double j = 0, &val2 = j;
    val2 = 3.14159;
    std::cout << "val2:" << val2 << std::endl;

    val2 = val1;
    std::cout << "val2:" << val2 << std::endl;
    i = val2;
    std::cout << "i:" << i << std::endl;
    val1 = j;
    std::cout << "val1:" << val1 << std::endl;
}
void demo() {
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl;
}
int main() {
    // int i = 100, sum = 0;
    // int j = i;
    // std::cout << "i = " << i << std::endl;
    // std::cout << "::i = " << ::i << std::endl;
    // for (int i = 0; i != 10; ++i) {
    //     sum += i;
    // }
    // std::cout << i << " " << sum << std::endl;
    // refer();
    int i = 10;
    int* p = &i;
    demo();
    return 0;
}