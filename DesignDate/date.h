// 날짜계산 프로그램

#include <iostream>

#ifndef DATE_H
#define DATE_H

int dateArr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class Date
{
private:
    int _year;
    int _month;
    int _day;

public:
    void setDate(int year, int month, int day);
    void addDay(int inc);
    void addMonth(int inc);
    void addYear(int inc);

    void showDate();
};

void Date::setDate(int year, int month, int day)
{
    if (month < 1 || month > 12)
    {
        std::cout << "올바른 '월'을 입력해주세요." << std::endl;
        return;
    }

    if (day <= 0 || day > dateArr[month - 1])
    {
        std::cout << "올바른 '일'수를 입력해주세요." << std::endl;
        return;
    }

    _year = year;
    _month = month;
    _day = day;

    std::cout << "설정한 날짜: " << _year << "년 " << _month << "월 " << _day << "일" << std::endl;
}

void Date::addDay(int inc)
{
    
}

void Date::addMonth(int inc)
{
    int month = inc;

    if (month > 0)
    {
        if (month > 12)
        {
            _year += month / 12;
            month = month % 12;
        }

        if (_month + month > 12)
        {
            _year += 1;

            _month = (_month + month) - 12;
        }
        else
        {
            _month = _month + month;
        }
    }
    else
    {
        if (month < -12)
        {
            _year += month / 12;
            month = month % 12;
        }

        if (_month + month <= 0)
        {
            _year += -1;
            _month = (_month + month) + 12;
        }
        else
        {
            _month = _month + month;
        }
    }

    std::cout << "변경된 날짜: " << _year << "년 " << _month << "월 " << _day << "일" << std::endl;
}

void Date::addYear(int inc)
{
    if (_year + inc <= 0)
    {
        std::cout << "0년 이하로는 조정하실 수 없습니다." << std::endl;
        return;
    }

    _year += inc;
    std::cout << "변경된 날짜: " << _year << "년 " << _month << "월 " << _day << "일" << std::endl;
}

void Date::showDate()
{
    std::cout << "설정하신 날짜는: " << _year << "년 " << _month << "월 " << _day << "일 입니다." << std::endl;
}

#endif