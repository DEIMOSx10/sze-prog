#include <iostream>

using namespace std;

double avg(double lista[], int hossz) {
    int min = INT_MAX;
    int max = INT_MIN;
    double szum = 0;
    for (int i = 0; i < hossz; ++i) {
        if(lista[i] > max) {
            max = lista[i];
        }
        if(lista[i] < min) {
            min = lista[i];
        }
        szum += lista[i];
    }

    double eredmeny = (szum - max - min) / (hossz - 2);
    return eredmeny;
}

int main() {

    int hossz = 4;

    double lista[hossz] = {2, 3, 5, 6};

    return 0;
}
