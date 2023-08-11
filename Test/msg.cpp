#include <iostream>
#include <chrono>
#include <thread>

int main() {
    std::string messages[] = {
        "Hello, how are you?",
        "I'm good, thank you!",
        "What are you up to?"
    };

    for (const std::string& message : messages) {
        std::cout << "\33[2K\r";
        std::cout << "\033[K" << message << std::flush;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    std::cout << std::endl;

    return 0;
}
