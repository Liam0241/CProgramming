#include "Triangle.h"
#include <iostream>

int main() {
    Triangle t1(4, 4, 4);
    Triangle t2(5, 5, 2);
    Triangle t3(5.5, 5.5, 1);

    t1.display();
    std::cout << "\n";
    t2.display();
    std::cout << "\n";
    t3.display();
    std::cout << std::boolalpha << (t1 < t2) << "\n";
    std::cout << std::boolalpha << (t2 >= t3) << "\n";
    std::cout << std::boolalpha << (t1 != t3) << "\n";

    return 0;
}
