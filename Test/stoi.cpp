#include <cstdlib>  // 包含 atoi 函数
#include <iostream>
#include <string>  // 包含 stoi 函数
#include <string.h>
using namespace std;
int main() {
    int len = 12345;
    string lenstr = to_string(12345);
    cout << "lenstr:" << lenstr << endl;
    const char* str = lenstr.c_str();
    cout << "str:" << str << endl;
    char datalen[6];
    strncpy(datalen, str, 5);
    datalen[5] = '\0';
    // 使用 std::stoi() 进行转换
    int intValue1 = std::stoi(datalen);

    // 使用 std::atoi() 进行转换
    int intValue2 = std::atoi(datalen);

    std::cout << "Value 1: " << intValue1 << std::endl;
    std::cout << "Value 2: " << intValue2 << std::endl;

    return 0;
}