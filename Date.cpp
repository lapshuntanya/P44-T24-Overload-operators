//
// Created by  Tetiana Lapshun on 02.09.2025.
//

#include "Date.h"
#include <ctime>
#include <iostream>
using namespace  std;

Date::Date() {
    auto sec = time(NULL);
    tm * now = new tm;
   // localtime_s(now, &sec); //VS

    now = localtime(&sec); //Xcode, Clion

    year = now->tm_year + 1900;
    month = now->tm_mon + 1;
    day = now->tm_mday;
}

Date::Date(int year, int month, int day) {//2025 1 1
    this->year = year;
    this->month = month;
    this->day = day;
}

bool Date::isLeapYear() const {
    return false;
}

int Date::monthDays() const {
    return 0;
}

 void Date::nextDate() {
}

 void Date::prevDate() {
}

 void Date::setYear(int year) {
}

 int Date::getYear() const {
    return 0;
}

 void Date::setMonth(int month) {
}

 int Date::getMonth() const {
 return 0;
}

 void Date::setDay(int day) {
}

 int Date::getDay() const {
 return 0;
}

void Date::showDate() const {
  cout << day/10 << day%10 << "." << month/10 << month%10 << "." << year << endl;
}

 bool Date::valid() const {
 return false;
}