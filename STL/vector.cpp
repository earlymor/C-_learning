/* vector */
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void print(int val) {
    cout << val << endl;
}
void test1() {
    // 创建容器,
    vector<int> v;
    // 插入数据
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // 通过迭代器访问数据
    vector<int>::iterator i;
    // 遍历
    // 1.for
    for (i = v.begin(); i != v.end(); i++) {
        // end成员函数返回的不是指向最后一个元素的迭代器，而是指向最后一个元素后面的位置的迭代器
        cout << *i << endl;
    }
    // 2.for_each
    for_each(v.begin(), v.end(), print);
}
int main() {
    test1();
    return 0;
}