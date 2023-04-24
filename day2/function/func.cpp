#include <iostream>
// 默认参数后都要是默认参数
int func(int a, int b = 20, int c=30) { 
    return a + b + c; 
}
int main() {
  std::cout << func(10, 20, 30) << std::endl; // 60
  std::cout << func(0) << std::endl;          // 50
  std::cout << func(0,10) << std::endl;          // 40

  return 0;
}