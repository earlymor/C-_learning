#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    set<string> friends;
    friends.insert("wang");
    friends.insert("zhang");
    friends.insert("li");
    for (string name : friends) {
        cout << name << endl;
    }
    return 0;
}