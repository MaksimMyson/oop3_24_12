

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // ������������
    Complex();
    Complex(double realPart, double imaginaryPart);
    Complex(const Complex& other);

    // ������ �������
    double getReal() const;
    double getImaginary() const;

    // �������������� ���������
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    bool operator==(const Complex& other) const;
    bool operator!=(const Complex& other) const;

    // ����� �������������� ��������� ������
    friend std::ostream& operator<<(std::ostream& os, const Complex& complex);

    // ����� �������������� ��������� �����
    friend std::istream& operator>>(std::istream& is, Complex& complex);
};

#endif // COMPLEX_H
