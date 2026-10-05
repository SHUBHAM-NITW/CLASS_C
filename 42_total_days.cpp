#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[1] = 29;
    }
    int totalDays = 0;
    for (int i = 0; i < month - 1; i++) {
        totalDays += daysInMonth[i];
    }
    totalDays += (day - 1);
    cout << totalDays;
    return 0;
}
