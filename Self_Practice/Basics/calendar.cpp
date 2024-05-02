#include <iostream>
#include <iomanip>
using namespace std;

class Calendar {
private:
    int year;

    bool isLeapYear(int year) {
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    }

    int dayOfWeek(int year, int month, int day) {
        if (month < 3) {
            month += 12;
            year--;
        }
        int h = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
        return (h + 6) % 7; // 0 for Sunday, 1 for Monday, ..., 6 for Saturday
    }

public:
    Calendar(int year) {
        this->year = year;
    }

    void printCalendar() {
        cout << "Calendar of " << year << endl;

        for (int month = 1; month <= 12; month++) {
            cout << "Month: " << month << endl;
            cout << "Mon Tue Wed Thu Fri Sat Sun" << endl;

            int daysInMonth;
            if (month == 2) {
                if (isLeapYear(year)) {
                    daysInMonth = 29;
                } else {
                    daysInMonth = 28;
                }
            } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                daysInMonth = 30;
            } else {
                daysInMonth = 31;
            }

            int startDayOfWeek = dayOfWeek(year, month, 1);

            int day = 1;
            while (day <= daysInMonth) {
                for (int i = 0; i < startDayOfWeek; i++) {
                    cout << setw(4) << " ";
                }
                for (int i = startDayOfWeek; i < 7 && day <= daysInMonth; i++) {
                    cout << setw(4) << day;
                    day++;
                }
                cout << endl;
                startDayOfWeek = 0;
            }
            cout << endl;
        }
    }
};

int main() {
    int year = 2024;
    Calendar calendar(year);
    calendar.printCalendar();
    return 0;
}
