#include <iostream>

#ifndef DATE_H
#define DATE_H

int dateArr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class Date {
    private:
        int year;
        int month;
        int day;

    public:
        void setDate(int year, int month, int day);
        void addDay(int inc);
        void addMonth(int inc);
        void addYear(int inc);

        void showDate();
};

void Date::setDate(int year, int month, int day) {
    if (month < 1 || month > 12) {
        std::cout << "올바른 '월'을 입력해주세요." << std::endl;
        return;
    }

    if (day <= 0 || day > dateArr[month - 1]) {
        std::cout << "올바른 '일'수를 입력해주세요." << std::endl;
        return;
    }

    year = year;
    month = month;
    day = day;

    std::cout << "설정한 날짜: " << year << "년 " << month << "월 " << day << "일" << std::endl;
}

void Date::addDay(int inc) {

}

void Date::addMonth(int inc) {
    
}

void Date::addYear(int inc) {

}

void Date::showDate() {

}

#endif