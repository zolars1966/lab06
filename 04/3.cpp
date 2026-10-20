#include <iostream>
#include <string>
#include <cstdint>

int main() {
    std::string a;
    std::string b;

    auto address_a = reinterpret_cast<std::uintptr_t>(&a);
    auto address_b = reinterpret_cast<std::uintptr_t>(&b);

    std::cout << "empty: sizeof(a)=" << sizeof(a)
              << ", address(a)=" << address_a << '\n';

    a = "short";
    b = std::string(1000, 'x');

    std::cout << "after assignment: sizeof(a)=" << sizeof(a)
              << ", address(a)="
              << reinterpret_cast<std::uintptr_t>(&a) << '\n';
    std::cout << "long string: sizeof(b)=" << sizeof(b)
              << ", address(b)="
              << reinterpret_cast<std::uintptr_t>(&b) << '\n';

    return 0;
}