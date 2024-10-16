#include <iostream>

#define ZH_SZAM 2

using namespace std;

// struktura deklaracio
struct hallgato {
    string nev;
    string neptun;
    string targy;
    int pontok[ZH_SZAM];
};

hallgato beolvas() {
    hallgato hg;
    cout << "Hallgato neve: ";
    getline(cin, hg.nev);

    cout << "Hallgato Neptun kodja: ";
    getline(cin, hg.neptun);

    cout << "Tantargy neve: ";
    getline(cin, hg.targy);

    cout << "A ZH-k pontszamai rendre: ";
    for (int i = 0; i < ZH_SZAM; ++i) {
        cin >> hg.pontok[i];
    }
    return hg;
}

double atlag(hallgato hg) {                         // miert ezt adom bemenetnek
    double ossz = hg.pontok[0] + hg.pontok[1];
    return ossz / ZH_SZAM;
}

int main() {
    cout << "Hallgatoi adatok beolvasasa es ZH atlag kiszamolasa" << endl;
    hallgato hg = beolvas();
    cout << "A hallgato atlaga az adott targybol: " << atlag(hg) << endl;
    return 0;
}