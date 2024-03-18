#include <iostream>
#include "cal.h"

int main() {
    int a = 10;
    int b = 5;

    std::cout << "Adding: " << add(a, b) << std::endl;
    std::cout << "Subtracting: " << subtract(a, b) << std::endl;

    return 0;
}
