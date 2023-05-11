#include <iostream>
#include <cmath> //将后面的.h变成了前面的c
#include <string>
using namespace std;
struct stu
{
    string name;
    int age;
};
int main()
{
    // const int m=10;//const定义常量
    // int n;
    // cin >> n;//输入  将输入的东西赋给n
    // cout << n<<endl;//输出   endl是换行的意思 类比于c语言的\n

    // string类--非常方便
    string s1 = "hello";
    string s2 = " world";
    string s = s1 + s2; // 直接进行加和 hello world
    cout << s << endl;

    // string s;
    // cin >> s;//cin只能输入一个单词 不能中间有空格
    // cout << s<< endl;//s.length可直接获取字符串的长度

    // 子串
    s = "hello world";
    // string s_sub = s.substr(1,2);//从第一个字符往后取两个
    string s_sub = s.substr(0); // 从这个字符后的所有字符全都被拷贝了 hello world
    cout << s_sub << endl;
    s_sub = s.substr(1, 6);//ello w
    cout << s_sub << endl;

    // 结构体
    struct stu a[10];
    stu arr[10]; // 可将struct省去 及简化了tepedef的使用

    // 引用--可以避免使用指针

    return 0;
}