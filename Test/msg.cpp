#include <unistd.h>
#include <chrono>
#include <iostream>
#include <string>
#include <thread>

using namespace std;

bool dataInput(int& data) {
    if (!(cin >> data)) {
        // 清除错误状态和缓冲区
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "输入无效。" << std::endl;
        sleep(1);
        cout << "\033[A"
             << "\33[2K\r";
        return false;
    }
    cin.get();
    return true;
}
void test1() {
    std::string messages[] = {"Hello, how are you?", "I'm good, thank you!",
                              "What are you up to?"};

    for (const std::string& message : messages) {
        std::cout << message << std::flush;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "\33[2K\r"
                  << "\033[K";
    }

    std::cout << std::endl;
}
void test2() {
    int number;
    bool legal = false;
    while (!legal) {
        system("clear");
        cout << "请输入好友账号："<<std::flush;
        legal = dataInput(number);
        cout << "\033[A"
             << "\33[2K\r" ;
    }
}

int main() {
    test2();
        return 0;
}
