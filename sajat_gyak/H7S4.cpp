/*
Készíts egy Koordinata struktúrát, amely két egész számot (x, y) tárol!
Készíts egy Negyzet struktúrát, amely négy koordinátát tárol, amelyek egy négyzet csúcsait jelölik!
Írj egy függvényt, amely egy Negyzet struktúra címét kapja meg, és feltölti azt billentyűzetről olvasott értékekkel!
Írj egy függvényt, amely egy Negyzet struktúra címét kapja meg, és megjeleníti annak csúcsait a képernyőn!
Olvass be egy három elemű tömbbe négyzeteket az előbb megírt függvény segítségével!
Írasd ki a tömb elemeit!
 */

#include <iostream>

using namespace std;

struct Koordinata {
    int x;
    int y;
};

struct Negyzet {
    Koordinata cs1;
    Koordinata cs2;
    Koordinata cs3;
    Koordinata cs4;
};

void negyzetBeolvas(Negyzet* n) {
    cout << "X: "; cin >> n->cs1.x; cout << "Y: "; cin >> n->cs1.y;
    cout << "X: "; cin >> n->cs2.x; cout << "Y: "; cin >> n->cs2.y;
    cout << "X: "; cin >> n->cs3.x; cout << "Y: "; cin >> n->cs3.y;
    cout << "X: "; cin >> n->cs4.x; cout << "Y: "; cin >> n->cs4.y;
}

void negyzetKiir(Negyzet* n) {
    cout << "X: " << n->cs1.x << " Y: " << n->cs1.y << endl;
    cout << "X: " << n->cs2.x << " Y: " << n->cs2.y << endl;
    cout << "X: " << n->cs3.x << " Y: " << n->cs3.y << endl;
    cout << "X: " << n->cs4.x << " Y: " << n->cs4.y << endl;
}

int main() {

    Negyzet negyzetek[3];

    cout << "A negyzet adatainak beolvasasa: " << endl;
    for (int i = 0; i < 2; ++i) {
        cout << i + 1 << ". negyzet csucsainak koordinatai:" << endl;
        negyzetBeolvas(&negyzetek[i]);
    }

    cout << "A negyzet adatainak a kiirasa: " << endl;
    for (int i = 0; i < 2; ++i) {
        cout << i + 1 << ". negyzet csucsainak koordinatai:" << endl;
        negyzetKiir(&negyzetek[i]);
    }

    return 0;
}