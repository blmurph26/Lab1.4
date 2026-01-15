#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    int year, month, day;
    int daysToAdd;

    cout << "=== Appointment Scheduler ===\n\n";

    cout << "Enter appointment year: ";
    cin >> year;

    cout << "Enter appointment month: ";
    cin >> month;

    cout << "Enter appointment day: ";
    cin >> day;

    Date appointment(year, month, day);

    cout << "\nHow many days until the next appointment? ";
    cin >> daysToAdd;

    Date nextAppointment = appointment + daysToAdd;

    cout << "\nYour next appointment will be on:\n";
    cout << nextAppointment << endl;

    return 0;
}
