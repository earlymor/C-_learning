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

    Person(int age ,string name) { 
        this->m_name=name;
        this->m_age=age;
     }
    Person(int a) { cout << "Person 有参的构造函数调用" << endl; }
    // 拷贝构造函数
    string m_name;
    int m_age;
    // 析构函数
};

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
void test2(){
    Person p1(10,"aaa");
    Person p2(20,"bbb");
    Person p3(30,"ccc");
    Person p4(40,"ddd");

    vector<Person> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    for(vector<Person>::iterator it=v.begin();it!=v.end();it++){
        cout << "age:" << it->m_age << "\t" << "name:" << it->m_name <<endl;
        // cout << "age:" << (*it).m_age << "\t" << "name:" << (*it).m_name <<endl;

    }
}
int main() {
    test2();
    return 0;
}