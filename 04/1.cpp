#include <iostream>
#include <string>
#include <cstdint>

template <typename T>
void show(const char* name, T& value) {
    auto address = reinterpret_cast<std::uintptr_t>(&value);
    std::cout << name
              << ": address=" << address
              << ", sizeof=" << sizeof(value) << '\n';
}

int main() {
    char c = 'x';
    int i = 42;
    double d = 3.14;
    long long ll = 100;
    std::string s = "hello";

    show("char", c);
    show("int", i);
    show("double", d);
    show("long long", ll);
    show("string", s);

    return 0;
}
