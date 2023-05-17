#include <iostream>
void test1(){
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    
}
void test2(){
    /* Literal value */
    int i1 = 10;
    int i2 = 10.1;
    int i3 = 10.1f;
    std::cout << "i1" << i1 << std::endl;
    std::cout << "i2" << i2 << std::endl;
    std::cout << "i3" << i3 << std::endl;

}
void test3(){
    // int i = {3.14}; 报错
    int k;
    int k = 2; // 变量能且只能被定义一次，但是可以被多次声明。
    int i(3.14);
    std::cout << i <<std::endl;
}
int main() {
    test3();
    return 0;
}