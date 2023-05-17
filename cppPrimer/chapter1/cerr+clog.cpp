#include <iostream>
// #include <unistd.h>
/* int main() {
    int x = 42;

    std::cerr << "This is an error message." << std::endl;  // 非缓冲cerr
    // sleep(2);
    std::clog << "This is a log message." << std::endl;  // 缓冲clog
    std::cout << "The value of x is: " << x << std::endl;

    return 0;
} */

/* int main() {
    int divisor = 0;
    if (divisor == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
    }
    return 0;
} */

int main() {
    int value = 42;
    std::clog << "Processing value: " << value << std::endl;
    // ...
    std::cout << "common message" << std::endl;
    std::clog << "Value processed successfully." << std::endl;
    return 0;
}