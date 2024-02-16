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

int main() {
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

    return 0;
}

