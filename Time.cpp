#include "Time.h"

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

void Time::increment() {
    seconds++;
    if (seconds >= 60) {
        seconds = 0;
        minutes++;
        if (minutes >= 60) {
            minutes = 0;
            hours++;
            if (hours >= 24) {
                hours = 0;
            }
        }
    }
}

Time Time::operator++() {
    increment();
    return *this;
}

Time Time::operator--() {
    seconds--;
    if (seconds < 0) {
        seconds = 59;
        minutes--;
        if (minutes < 0) {
            minutes = 59;
            hours--;
            if (hours < 0) {
                hours = 23;
            }
        }
    }
    return *this;
}

bool Time::operator!=(const Time& other) const {
    return hours != other.hours || minutes != other.minutes || seconds != other.seconds;
}

bool Time::operator==(const Time& other) const {
    return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
}

bool Time::operator>(const Time& other) const {
    if (hours > other.hours)
        return true;
    else if (hours < other.hours)
        return false;
    else if (minutes > other.minutes)
        return true;
    else if (minutes < other.minutes)
        return false;
    else
        return seconds > other.seconds;
}

bool Time::operator<(const Time& other) const {
    return !(*this > other) && *this != other;
}

Time Time::operator+=(int secondsToAdd) {
    for (int i = 0; i < secondsToAdd; i++) {
        increment();
    }
    return *this;
}

Time Time::operator-=(int secondsToSubtract) {
    for (int i = 0; i < secondsToSubtract; i++) {
        seconds--;
        if (seconds < 0) {
            seconds = 59;
            minutes--;
            if (minutes < 0) {
                minutes = 59;
                hours--;
                if (hours < 0) {
                    hours = 23;
                }
            }
        }
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Time& time) {
    os << time.hours << ":" << time.minutes << ":" << time.seconds;
    return os;
}

std::istream& operator>>(std::istream& is, Time& time) {
    is >> time.hours;
    is.ignore(1, ':');
    is >> time.minutes;
    is.ignore(1, ':');
    is >> time.seconds;
    return is;
}