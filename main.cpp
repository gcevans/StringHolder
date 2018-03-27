#include <iostream>

#include "stringholder.h"

int main() {
    StringHolder hello("hello, world.");
    // std::cout << hello.c_str() << std::endl;

    StringHolder goodbye(hello);
    // std::cout << goodbye.c_str() << std::endl;
    goodbye.ChangeString("goodbye");
    // std::cout << goodbye.c_str() << std::endl;

    std::cout << hello.c_str() << std::endl;
    std::cout << goodbye.c_str() << std::endl;

    return 0;
}
