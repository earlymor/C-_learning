/* vector */
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void print(int val) {
    cout << val << endl;
}
class Person {
    // 构造函数
   public:
    Person(int age, string name) {
        this->m_name = name;
        this->m_age = age;
    }
    Person(int a) { cout << "Person 有参的构造函数调用" << endl; }
    // 拷贝构造函数
    string m_name;
    int m_age;
    // 析构函数
};
void printVector(vector<int> v) {
    vector<int>::iterator i;

    for (i = v.begin(); i != v.end(); i++) {
        // end成员函数返回的不是指向最后一个元素的迭代器，而是指向最后一个元素后面的位置的迭代器
        cout << *i;
    }
    // 2.for_each
    // for_each(v.begin(), v.end(), print);
    cout << endl;
}
void test1() {
    // 创建容器,
    vector<int> v;
    vector<int>::iterator i = v.begin();
    vector<int>::iterator j = v.end();

    // 插入数据
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // 通过迭代器访问数据
    vector<int> v2(v.begin(), v.end());
    vector<int> v3(10, 1);
    printVector(v);
    printVector(v2);
    printVector(v3);

    /* swap 交换 */
    v.swap(v3); //容器交换 迭代器也交换
    for (; i != j; i++) {
        cout << *i; // 
    }
    cout << endl;
    cout << "capacity " << v.capacity() << endl;
    cout << "size " << v.size() << endl;
    v.resize(3);
    vector<int>(v).swap(v); //  与匿名容器互换实现内存收缩
    cout << "capacity " << v.capacity() << endl;
    cout << "size " << v.size() << endl;
    
    /* reserve 预留内存 */
    vector<int> v1;
    v1.reserve(1000);//避免重复开辟空间

    
}

void test2() {
    Person p1(10, "aaa");
    Person p2(20, "bbb");
    Person p3(30, "ccc");
    Person p4(40, "ddd");

    vector<Person> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    for (vector<Person>::iterator it = v.begin(); it != v.end();
         it++) {  // 循环打印
        cout << "age:" << it->m_age << "\t"
             << "name:" << it->m_name << endl;
        // cout << "age:" << (*it).m_age << "\t" << "name:" << (*it).m_name
        // <<endl;
    }
}
int main() {
    test1();

    /* empty() 判断容器是否为空 */

    /* capacity() 容器的容量 */

    /* size() 返回容器中元素的个数 */

    /* resize(int num) 重新指定容器的长度 */
    return 0;
}