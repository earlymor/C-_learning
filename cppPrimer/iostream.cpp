#include <unistd.h>
#include <iostream>
using namespace std;
int main() {
    int val;
    cout << "Hello";  // 不会立即输出
    // cin >> val; // cin会刷新cout
    sleep(10);
    cout << "World" << endl;
    return 0;
}