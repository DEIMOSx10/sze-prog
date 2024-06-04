#include <iostream>
#include <sstream>
#include <map>

using namespace std;

const map<int, std::string> monthNames = {
    {1, "January"}, {2, "February"}, {3, "March"}, {4, "April"},
    {5, "May"}, {6, "June"}, {7, "July"}, {8, "August"},
    {9, "September"}, {10, "October"}, {11, "November"}, {12, "December"}
};

void DMY2MonthSpelledOut(const std::string& d) {
    istringstream date(d);
    int day, month, year;
    char delimiter;
    date >> day >> delimiter >> month >> delimiter >> year;

    cout << day << " " << monthNames.at(month) << ' ' << year;
}

int main() {

    DMY2MonthSpelledOut("16/01/2024");

    return 0;
}



