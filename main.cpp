#include "Time.h"

int main() {
    Time t1(12, 30, 45);
    Time t2(10, 15, 30);

    std::cout << "t1: " << t1 << std::endl;
    std::cout << "t2: " << t2 << std::endl;

    std::cout << "t1 == t2: " << (t1 == t2) << std::endl;
    std::cout << "t1 != t2: " << (t1 != t2) << std::endl;
    std::cout << "t1 > t2: " << (t1 > t2) << std::endl;
    std::cout << "t1 < t2: " << (t1 < t2) << std::endl;

    std::cout << "Increment t1: " << ++t1 << std::endl;
    std::cout << "Decrement t2: " << --t2 << std::endl;

    t1 += 20;
    std::cout << "t1 += 20: " << t1 << std::endl;

    t2 -= 10;
    std::cout << "t2 -= 10: " << t2 << std::endl;

    Time t3;
    std::cout << "Enter time (hh:mm:ss): ";
    std::cin >> t3;
    std::cout << "You entered: " << t3 << std::endl;

    return 0;
}