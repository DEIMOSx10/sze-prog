#include <iostream>

using namespace std;

#define OSZAM 10

/*
*Írjon egy programot, amely 2 db felhasználói függvényt használ. Az egyik az
*int beker(int be_tb[], int *min, int *max),
*amely 10 db előjeles egész számot kér be úgy, hogy azokat egy tömbbe tárolja le.
*A tömb hosszát szimbolikus állandóval állítsa be.
*A tárolás csak akkor jöjjön létre, ha az alábbi feltételek teljesülnek.
*
*A tömb 0. indexén csak a nulla érték,
*a páratlan indexein csak páratlan értékek
*és a páros indexein csak páros számok szerepelhetnek!
*
*Ha az adott érték nem teljesíti a rá vonatkozó feltételt, akkor új számot kell bekérni.
*Bekérési információk és hibaüzenetek kiírása nem kell!
*
*A feltételek teljesülése esetén a beker függvény határozza meg és tárolja el
*a legkisebb páratlan,
*illetve a legnagyobb páros számokat.
*
*Ezen értékek a függvény 2. és 3. paraméterei,
*amíg az 1. paraméter a tároló tömb.
*
*A függvény visszatérési értéke a 10 db szám összege legyen.
*
*A másik függvény a
*void kiir(int szum, int min, int max),
*pedig írja ki a beker függvény visszatérési értékét
*illetve a 2. és 3. paraméterek értékeit a példában látott szövegezéssel.
*/

int beker(int be_tb[OSZAM], int *min, int *max) {
    int szamlalo = 0;
    while (szamlalo < OSZAM) {
        cin >> be_tb[szamlalo];
        if (szamlalo == 0 && be_tb[szamlalo] != 0) {
            continue;
        }
        if (szamlalo % 2 != 0 && be_tb[szamlalo] % 2 == 0) {
            continue;
        }
        if (szamlalo % 2 == 0 && be_tb[szamlalo] % 2 != 0) {
            continue;
        }
        if (szamlalo % 2 != 0 && be_tb[szamlalo] < *min) {
            *min = be_tb[szamlalo];
        }
        if (szamlalo % 2 == 0 && be_tb[szamlalo] > *max) {
            *max = be_tb[szamlalo];
        }
        szamlalo++;
    }

    int osszeg = 0;
    for (int i = 0; i < OSZAM; ++i) {
        osszeg += be_tb[i];
    }
    return osszeg;
}


void kiir(const int min, const int max, const int result) {
    cout << result << endl << min << endl << max;
}

int main() {
    int min = INT_MAX;
    int max = INT_MIN;
    int be_tb[OSZAM];
    const int result = beker(be_tb, &min, &max);

    kiir(min, max, result);

    return 0;
}
