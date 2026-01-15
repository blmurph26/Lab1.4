#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>

using namespace std;

class Date
{
private:
    int year;
    int month;
    int day;

public:
    Date();
    Date(int y, int m, int d);

    int getYear() const;
    int getMonth() const;
    int getDate() const;


    void addDays(int days);

    string toString() const;

    Date operator+(int days) const;
    friend ostream& operator<<(ostream& os, const Date& d);
};

#endif
