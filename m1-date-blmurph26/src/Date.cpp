#include "Date.h"

//Define Item methods here




/**
 * Adds n (the number of months to be added) to the date of the object.  Adjusts the year if necessary.
 * @param n
 * @return
 */
Date& Date::addMonths(int n)
{
    year  += (month + n) / 12;
    month = (month + n) % 12;
    return *this;
}

/**
 * Adds n (the number of days to be added) to the date of the current object.  Adjusts the year and month if necessary
 * @param n
 * @return
 */
Date& Date::addDays(int n)
{
    int d = daysToDate() + n;
    int y = year, m = 1;
    while(d > daysInMonth(y, m)){
        d -= daysInMonth(y, m);
        m++;
        if(m > 12){
            m = 1;
            y++;
        }
    }
    day = d;
    month = m;
    year = y;

    return *this;
}

/**
 * Determines if the given year is leap year.
 * @param y
 * @return true if it is a leap year
 */
bool Date::isLeapYear(int y)
{
    return (y % 4 || (y % 100 == 0 && y % 400)) ? false : true;
}

/**
 * Helper function to aid in calculating addDays method.  Counts the number of days to the currrent date
 * @return
 */
int Date::daysToDate()
{
    int days_in_month[]{31, isLeapYear(year) ? 29 : 28, 31,
                        30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;
    for(int m = 0; m < month - 1; m++){
        days += days_in_month[m];
    }
    days += day;
    return days;
}
/**
 * Determines the number of days in the given month.
 * @param y
 * @param m
 * @return
 */
int Date::daysInMonth(int y, int m){
    int days_in_month[]{31, isLeapYear(y) ? 29 : 28, 31,
                        30, 31, 30, 31, 31, 30, 31, 30, 31};
    return days_in_month[m - 1];
}