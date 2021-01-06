#include <iostream>
#include <thread>

int main() {
    auto a = std::thread([]() { std::cout << "hello, thread" << std::endl; });
    a.join();
    return 0;
}
