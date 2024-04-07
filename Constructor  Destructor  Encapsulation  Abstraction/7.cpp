/*
Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid.
*/

#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    bool isValidDate() {
        if (year < 0 || month < 1 || month > 12 || day < 1)
            return false;

        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                if (day > 29)
                    return false;
            } else {
                if (day > 28)
                    return false;
            }
        } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;

        return true;
    }
};

int main() {
    int day, month, year;

    cout << "Enter day, month, and year (separated by spaces): ";
    cin >> day >> month >> year;

    Date date(day, month, year);

    if (date.isValidDate()) 
        cout << "Entered date is valid." << endl;
    else 
        cout << "Entered date is not valid." << endl;

    return 0;
}
