#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

struct NobelDij{
    string country;
    unsigned int numWinnners;
    double millionPeople;
};

bool nobel_sorter_down(NobelDij const& lhs, NobelDij const& rhs) {
    return lhs.numWinnners < rhs.numWinnners;
}

bool nobel_sorter_up(NobelDij const& lhs, NobelDij const& rhs) {
    return (lhs.millionPeople / lhs.numWinnners) > (rhs.millionPeople / rhs.numWinnners);
}

void sortByRate(bool rate, NobelDij *nobels, int n)
{
    if(!rate) {
        std::sort( nobels, nobels+n, &nobel_sorter_down);
    }
    else {
        std::sort( nobels, nobels+n, &nobel_sorter_up);
    }
}


void statistics(NobelDij *nobels, int n)
{
    double sum = 0;
    double sumN = 0;
    for (int i = 0; i < n; ++i) {
        sum += nobels[i].millionPeople;
        sumN += nobels[i].numWinnners;
    }
    double atlag = sum / n;
    double atlagN = sumN / n;

    double valami = atlag / atlagN;

    cout << "Orszagonkent atlagosan: " << atlag << " millio lakos" << endl;
    cout << "Atlagos Nobel-dijas szam orszagonkent: " << atlagN << endl;

}


void printAll(NobelDij *nobels, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << ". hely: "<< nobels[i].country << " (" << fixed << setprecision(2) << nobels[i].numWinnners / nobels[i].millionPeople << " Nobel dij / millio lakos) [Osszesen " << nobels[i].numWinnners << " Nobel]\n";
    }
}

int main() {

    NobelDij nobels[] = {
        {"AUS", 12, 24.4},
        {"BEL", 10, 11.42},
        {"CZE", 5, 10.6},
        {"DNK", 13, 5.73},
        {"FRA", 68, 64.97},
        {"GRE", 2, 11.1},
        {"HUN", 13, 9.7},
        {"GER", 107, 82.11},
        {"SPA", 8, 46.35},
        {"ROM", 4, 19.67},
        {"CHE", 26, 8.47},
        {"SLN", 1, 2.},
        {"SLK", 0, 5.45},
        {"USA", 368, 324.45},
        {"UKR", 2, 44.222},
    };
    sortByRate(true, nobels, 15);
    printAll(nobels, 15);
    statistics(nobels, 15);

    return 0;
}
