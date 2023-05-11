#include<iostream>
#define PI 3.14
using namespace std;
/* encapsulation 封装 */
class Circle{
    public:
    //属性
    double m_r;
    //行为
    double calculate(){
        double ret=PI*m_r*m_r;
        cout<<ret<<endl;
    }

};
int main(){
    //实例化
    Circle cl;
    cl.m_r=1.0;
    cl.calculate();
}