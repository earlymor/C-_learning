#include <iostream>
int main() {
    int sum = 0, value = 0;
    while (std::cin >> value)  // 遇到EOF时终止，或输入无效即输入不为int型
    {
        sum += value;
    }
    std::cout << sum << std::endl;
    return 0;
}
