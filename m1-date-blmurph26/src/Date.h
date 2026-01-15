#ifndef ITEM_H
#define ITEM_H

//Define Item class here


#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class Date
{
public:
    /*  Declare Necessary function prototypes here
     */







    //Already implemented: Use these methods for your convenience
    Date& addMonths(int n);
    Date& addDays(int n);
    static bool isLeapYear(int y);
    int daysToDate();



private:
    int year, month, day;

    static int daysInMonth(int y, int m);
};

#endif //ITEM_H