#include <iostream>
using namespace std;
int count = 0;
void move(int n, char A, char B) {
    cout << "disk " << n << ":" << A << "->" << B << endl;
    ++count;
}
void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        move(1, A, C);
    } else {
        hanoi(n - 1, A, C, B);
        move(n, A, C);
        hanoi(n - 1, B, A, C);
    }
}
int main() {
    int numDisks;
    cout << "请输入盘子总数" << endl;
    cin >> numDisks;
    cout << "盘子总数：" << numDisks << endl;
    hanoi(numDisks, 'A', 'B', 'C');
    cout << "count :" << ::count << endl;
    return 0;
}