#include <iostream>

using namespace std;

struct Telepules{
    string varos;
    int lelekSz;
    string orszag;
};

void rendez(Telepules* cities, int n){
    for (int i = 1; i < sizeof(cities)/sizeof(*cities); ++i) {
        if(cities[i].lelekSz < cities[i - 1].lelekSz) {

        }
    }
}

void kiir(Telepules* cities, int n){
}

void osszegzes(Telepules* cities, int n){
}

int main() {

    Telepules cities[] = {
        {"Kunsziget", 2500, "Hungary"},
        {"Abda", 5000, "Hungary"},
        {"Csorna", 30000, "Hungary"}
    };
    rendez(cities, 3);
    kiir(cities, 3);
    osszegzes(cities, 3);

    return 0;
}
