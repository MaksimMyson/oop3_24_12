
#ifndef TIME_H
#define TIME_H

#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time();  // конструктор за замовчуванням
    Time(int h, int m, int s);  // конструктор із параметрами

    // функція-член, яка дає приріст часу на 1 секунду
    void increment();

    // перевантажені оператори
    Time operator++();  // префіксний оператор інкремента
    Time operator--();  // префіксний оператор декремента
    bool operator!=(const Time& other) const;
    bool operator==(const Time& other) const;
    bool operator>(const Time& other) const;
    bool operator<(const Time& other) const;
    Time operator+=(int secondsToAdd);
    Time operator-=(int secondsToSubtract);
    friend std::ostream& operator<<(std::ostream& os, const Time& time);
    friend std::istream& operator>>(std::istream& is, Time& time);
};

#endif // TIME_H
