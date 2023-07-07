/* 联合体学习.cpp */
#include <iostream>
using namespace std;
// 相同的内存地址
union myun {
    struct {
        int x;
        int y;
        int z;
    } u;
    int k;
    double d;
} a;
union TypeConversion {
    int i;
    float f;
};
int main() {
#if 0
  a.u.x = 4;
  a.u.y = 5;
  a.u.z = 6;
  a.k = 0; //覆盖掉第一个int空间值
  printf("%d %d %d %d\n", a.u.x, a.u.y, a.u.z, a.k);
  cout << a.d << endl;
#endif

    TypeConversion tc;
    tc.i = 42;

    std::cout << "tc.i = " << tc.i << std::endl;
    std::cout << "tc.f = " << tc.f << std::endl;

    tc.f = 3.14;

    std::cout << "tc.f = " << tc.f << std::endl;
    std::cout << "tc.i = " << tc.i << std::endl;
    return 0;
}