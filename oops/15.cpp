Class Date for Valid Date Check:

#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    bool isValidDate() {
        if (month < 1 || month > 12 || day < 1 || day > 31)
            return false;
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;
        if (month == 2) {
            bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            if (leap && day > 29)
                return false;
            if (!leap && day > 28)
                return false;
        }
        return true;
    }

    void displayDate() {
        if (isValidDate())
            cout << "Date: " << day << "/" << month << "/" << year << endl;
        else
            cout << "Invalid Date!" << endl;
    }
};

int main() {
    Date date;
    date.setDate(29, 2, 2024);  // Leap year test
    date.displayDate();

    return 0;
}
