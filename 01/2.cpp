#include <iostream>
#include <cmath>

int main() {
    constexpr auto Pi = std::acos(0) * 2; // не собирается:
    // std::acos не constexpr в используемой стандартной библиотеке

    std::cout << Pi << '\n';

    return 0;
}
