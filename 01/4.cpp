#include <iostream>
#include <cmath>

int main() {
    double x = 0;

    constexpr auto Pi = std::acos(x) * 2; // ошибка: x не константное выражение

    std::cout << Pi << '\n';

    return 0;
}