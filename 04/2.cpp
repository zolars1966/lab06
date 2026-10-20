#include <iostream>
#include <cstdint>

int main() {
    {
        int first = 1;
        std::cout << "first: "
                  << reinterpret_cast<std::uintptr_t>(&first) << '\n';
    }

    {
        int second = 2;
        std::cout << "second: "
                  << reinterpret_cast<std::uintptr_t>(&second) << '\n';
    }

    return 0;
}
