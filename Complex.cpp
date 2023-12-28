

#include "Complex.h"

// ������������
Complex::Complex() : real(0.0), imaginary(0.0) {}

Complex::Complex(double realPart, double imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}

Complex::Complex(const Complex& other) : real(other.real), imaginary(other.imaginary) {}

// ������ �������
double Complex::getReal() const {
    return real;
}

double Complex::getImaginary() const {
    return imaginary;
}

// �������������� ���������
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imaginary - other.imaginary);
}

bool Complex::operator==(const Complex& other) const {
    return (real == other.real) && (imaginary == other.imaginary);
}

bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

// ����� �������������� ��������� ������
std::ostream& operator<<(std::ostream& os, const Complex& complex) {
    os << complex.real << " + " << complex.imaginary << "i";
    return os;
}

// ����� �������������� ��������� �����
std::istream& operator>>(std::istream& is, Complex& complex) {
    std::cout << "Enter the real part: ";
    is >> complex.real;
    std::cout << "Enter the imaginary part: ";
    is >> complex.imaginary;
    return is;
}
