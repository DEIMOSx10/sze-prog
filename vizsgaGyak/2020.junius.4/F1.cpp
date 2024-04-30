#include <iostream>
#include <algorithm>

using namespace std;

struct Lakas {
    int id; // Hirdetes azonositoja
    unsigned int terulet; // Alapterulet m^2-ben
    unsigned int ar; // Meghirdetett eladasi ar Ft-ban
};



bool sorter(Lakas &lhs, Lakas &rhs) {
    return (lhs.ar / lhs.terulet) < (rhs.ar / rhs.terulet);
}

void rendez(Lakas tomb[], int db) {
    sort(&tomb[0], &tomb[db], sorter);
}

int main() {

    Lakas lakasok[] = {
        {1, 76, 43500000},
        {2, 100, 38800000},
        {3, 62, 29900000},
        {4, 42, 22800000},
        {5, 125, 48500085}
    };

    return 0;
}
