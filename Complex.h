

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // Конструктори
    Complex();
    Complex(double realPart, double imaginaryPart);
    Complex(const Complex& other);

    // Методи доступу
    double getReal() const;
    double getImaginary() const;

    // Перевантаження операторів
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    bool operator==(const Complex& other) const;
    bool operator!=(const Complex& other) const;

    // Дружнє перевантаження оператору виводу
    friend std::ostream& operator<<(std::ostream& os, const Complex& complex);

    // Дружнє перевантаження оператору вводу
    friend std::istream& operator>>(std::istream& is, Complex& complex);
};

#endif // COMPLEX_H
