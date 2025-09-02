//
// Created by  Tetiana Lapshun on 02.09.2025.
//

#ifndef P44_T24_OVERLOAD_OPERATORS_DATE_H
#define P44_T24_OVERLOAD_OPERATORS_DATE_H


class Date {

    int year;
    int month;
    int day;
public:
    //--------- КОНСТРУКТОРИ та ДЕСТРУКТОРИ ---------
    Date(); // За замовчуванням - поточна дата
    Date(int year, int month, int day); // З параметрами - задана дата

    bool isLeapYear()const; //Перевірка на високосний рік
    int monthDays()const; //Кількість днів за місяцем
    void nextDate(); // Наступна дата
    void prevDate(); // Попередня дата

    //--------- АКСЕСОРИ ---------
    void setYear(int year);
    int getYear()const;
    void setMonth(int month);
    int getMonth()const;
    void setDay(int day);
    int getDay()const;

    void showDate()const;
    bool valid()const; // Перевірка дати на коректність

};



#endif //P44_T24_OVERLOAD_OPERATORS_DATE_H
