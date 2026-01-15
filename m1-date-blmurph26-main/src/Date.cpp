#include "Date.h"

Date::Date()
{
    year = 1;
    month = 1;
    day = 1;
}

Date::Date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}


int Date::getYear() const
{
    return year;
}

int Date::getMonth() const
{
    return month;
}


int Date::getDate() const
{
    return day;
}

void Date::addDays(int days)
{
    static int daysInMonth[] =
    { 31,28,31,30,31,30,31,31,30,31,30,31 };

    day += days;

    while (day > daysInMonth[month - 1])
    {
        day -= daysInMonth[month - 1];
        month++;

        if (month > 12)
        {
            month = 1;
            year++;
        }
    }
}

Date Date::operator+(int days) const
{
    Date temp = *this;
    temp.addDays(days);
    return temp;
}


string Date::toString() const
{
    static string months[] =
    {
        "Jan","Feb","Mar","Apr","May","Jun",
        "Jul","Aug","Sep","Oct","Nov","Dec"
    };

    return months[month - 1] + " " +
           to_string(day) + ", " +
           to_string(year);
}


ostream& operator<<(ostream& os, const Date& d)
{
    os << d.toString();
    return os;
}
