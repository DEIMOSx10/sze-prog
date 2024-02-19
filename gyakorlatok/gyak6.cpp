#include <iostream>
#include <algorithm>


using namespace std;


/*
*Készítsen programot, amely személyek születési évét, hónapját,
*napját képes tárolni, valamint a személy lakhelyének fővárostól való távolságát km-ben (float)!
*Olvassa be 5 személy adatait a standard bemenetről!
*Rendezze a tömböt a fővárostól való távolságok szerinti csökkenő sorrendbe, majd jelenítse meg az elemeit!
*Rendezze a tömböt a személyek kora szerinti növekvő sorrendbe, majd jelenítse meg az elemeit!
*/


struct szuletes {
    int ev;
    int honap;
    int nap;
};

struct szemely {
    szuletes szul;
    float tav;
};

bool comperator(const szemely &a, const szemely &b) {
    return a.tav > b.tav;
}

bool comperator_age(const szemely &a, const szemely &b) {
    if (a.szul.ev != b.szul.ev) {
        return a.szul.ev < b.szul.ev;
    }
    if (a.szul.honap != b.szul.honap) {
        return a.szul.honap < b.szul.honap;
    }
    return a.szul.nap < b.szul.nap;
}

void compare_person() {
    constexpr szemely szemely1 = {{1943, 4, 3}, 3};
    constexpr szemely szemely2 = {{1988, 11, 23}, 345};
    constexpr szemely szemely3 = {{2000, 11, 30}, 99};
    constexpr szemely szemely4 = {{2008, 5, 4}, 100};

    szemely emberek[4] = {szemely1, szemely2, szemely3, szemely4};

    sort(emberek, emberek + size(emberek), comperator); //BEST rendező függvény

    for (auto [szul, tav]: emberek) {
        cout << tav << endl;
    }

    sort(emberek, emberek + size(emberek), comperator_age);

    for (auto [szul, tav]: emberek) {
        cout << szul.ev << '.' << szul.honap << '.' << szul.nap << endl;
    }
}


/*
*Készítsen programot, amely bekéri a standard bemenetről hallgatók vezetéknevét,
*keresztnevét, neptun kódját, egy tantárgy nevét és a tárgyból írt 4 db ZH eredményeit!
*Az adatok bekérését végezze el egy erre a célra tervezett függvény, amely több értéket képes vissza adni!
*Az átlag számítását szintén egy függvény segítségével végezze el,
*ahol paraméterként az előző pontban meghatározott függvény visszatérési értékei szolgáljanak!
*/


struct Hallgato {
    string vezeteknev;
    string keresztnev;
    string nkod;
    string tnev;
    int zh[4];
};


void beker_hallgato(Hallgato &hallgato) {
    cout << "Adja meg a vezeteknevet: ";
    cin >> hallgato.vezeteknev;
    cout << "Keresztnevet: ";
    cin >> hallgato.keresztnev;
    cout << "Neptun kodjat: ";
    cin >> hallgato.nkod;
    cout << "Tantargy nevet: ";
    cin >> hallgato.tnev;
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". ZH: ";
        cin >> hallgato.zh[i];
        cout << endl;
    }
}

double atlag(const Hallgato &hallgato) {
    double osszeg = 0;
    for (const int i: hallgato.zh) {
        osszeg += i;
    }
    return osszeg / 4;
}

int main() {
    Hallgato hallgato1;
    beker_hallgato(hallgato1);
    cout << endl << endl << hallgato1.vezeteknev << endl;
    cout << hallgato1.keresztnev << endl;
    cout << hallgato1.nkod << endl;
    cout << hallgato1.tnev << endl;
    cout << hallgato1.zh[0] << endl;
    cout << hallgato1.zh[1] << endl;
    cout << hallgato1.zh[2] << endl;
    cout << hallgato1.zh[3] << endl;

    const double zhatlag = atlag(hallgato1);
    cout << zhatlag;


    return 0;
}

