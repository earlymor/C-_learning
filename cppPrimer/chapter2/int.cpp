#include <iostream>
using namespace std;
int main() {
    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << endl; // 32
    std::cout << u2 - u1 << endl; // 4294967264
}