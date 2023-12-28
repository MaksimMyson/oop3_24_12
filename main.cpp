

#include "Complex.h"

int main() {
    Complex a, b, result;

    // Введення комплексних чисел
    std::cout << "Enter the complex number a:\n";
    std::cin >> a;

    std::cout << "Enter the complex number b:\n";
    std::cin >> b;

    // Виведення комплексних чисел
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    // Використання операцій +, -, ==, !=
    result = a + b;
    std::cout << "a + b = " << result << std::endl;

    result = a - b;
    std::cout << "a - b = " << result << std::endl;

    if (a == b) {
        std::cout << "a and b are equal\n";
    }
    else {
        std::cout << "a and b are not equal\n";
    }

    if (a != b) {
        std::cout << "a and b are not equal\n";
    }
    else {
        std::cout << "a and b are  equal\n";
    }

    return 0;
}
