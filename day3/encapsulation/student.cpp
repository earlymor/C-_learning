#include<iostream>
#include<string>
using namespace std;
/* 设计一个学生类,属性有姓名和学号,可以给姓名和学号赋值,可以显示学生的姓名和学号 */
class Student{
    public://公共权限
    string m_name;//姓名
    string m_ID;//学号
    
    //方法
    void showName(){
        cout<<"name:"<<m_name<<endl;
    }
    void showID(){
        cout<<"ID:"<<m_ID<<endl;
    }
    void setID(string id){
        m_ID=id;
    }
    void setName(string name){
        m_name=name;
    }
};
int main(){
    Student stu;
    stu.setID("id");
    stu.setName("name");
    stu.showID();
    stu.showName();
}