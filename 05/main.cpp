#include <iostream>

namespace first {
    int value = 10;
    void print() {
        std::cout << "first: " << value << '\n';
    }
}

namespace second {
    int value = 25;
    void print() {
        std::cout << "second: " << value << '\n';
    }
}

int main() {
    first::print();
    second::print();

    std::cout << first::value + second::value << '\n';

    return 0;
}
