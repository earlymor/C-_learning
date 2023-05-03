#include <iostream>
#include <string>
using namespace std;
int main() {
    /* string 定义 */
    string s1 = "hello world";
    string s2 = string("s");
    s1 += s2;
    string s3;
    cout << s1 << endl;
    s3.append(s1, 4, 6);  // 从第4个向后截取6个
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    /* string.find() 查找  */
    int pos = s1.find("l");  // 第一个'l'的下标
    cout << pos << endl;
    pos = s1.rfind('l');
    cout << pos << endl;  // 从右向左第一个'l'的下标

    /* string.replace() 替换 */
    s1.replace(1, 3, "1111");  // 从第1个字符到第三个字符替换为"1111"
    cout << s1 << endl;

    /* string.compare() 比较 */
    if (s1.compare(s2) > 0) {
        cout << "s1>s2" << endl;
    } else if (s1.compare(s2) == 0) {
        cout << "s1=s2" << endl;
    } else if (s1.compare(s2) < 0) {
        cout << "s1<s2" << endl;
    }

    /* string.at() 访问字符 */
    s1.at(2) = '2';
    cout << s1 << endl;

    /* string.insert() 插入 */
    s1.insert(1, "hhhh");
    cout << s1 << endl;

    /* string.erase() 删除 */
    s1.erase(1, 2);
    cout << s1 << endl;

    /* string.substr() 求子串 */
    s2 = s1.substr(0, pos);
    cout << "pos:" << pos << endl;
    cout << s2 << endl;
}