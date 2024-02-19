#include <iostream>

using namespace std;

/*
Hozzon létre egy egész számot tároló változót és hozzá egy mutatót!
Olvassa be a szám értékét a mutatón keresztül!
Írassa ki a képernyőre a szám értékét és memóriacímét az első változó segítségével!
Írassa ki a képernyőre a szám értékét és memóriacímét a mutató változó segítségével!
Írassa ki a képernyőre a mutató címét!
*/

void pointer1() {
    int egesz;
    int *mutato = &egesz;

    cin >> *mutato;

    cout << "Az ertek: " << egesz << endl;
    cout << "A memoria cim: " << &egesz << endl;
    cout << "Az ertek: " << *mutato << endl;
    cout << "A memoria cim: " << mutato << endl;
    cout << "A mutato cime: " << &mutato << endl;
}

/*
Olvasson be egy hatelemű tömböt, amely egész számokat tárol és töltse fel értékekkel!
Hozzon létre egy 10 elemű tömböt, amely mutatókat tárol!
Olvasson be tíz számot a képernyőről! Ha a szám szerepel a hatelemű tömbben,
tárolja el annak a címét, ellenkező esetben tároljon el egy nullaértékű címet!
Jelenítse meg a 10 elemű tömb által mutatott értékeket és hozzájuk tartozó memóriacímeket!
*/

void pointer2() {
    int tomb[6] = {1, 5, 35, 89, 4, 435};
    int *mtomb[10];
    int szam;
    for (int i = 0; i < 10; ++i) {
        cin >> szam;
        mtomb[i] = nullptr;
        for (int j = 0; j < 6; ++j) {
            if (szam == tomb[j]) {
                mtomb[i] = &tomb[j];
                break;
            }
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (mtomb[i] == nullptr) {
            cout << "nullptr" << endl;
            continue;
        }
        cout << "Ertek: " << *mtomb[i] << "\tMemoria cim: " << mtomb[i] << endl;
    }
}

/*
Készítsen egy struktúrát, amely koordinátákat tárol (x, y, z)!
Hozzon létre egy tízelemű tömböt, amely koordinátákat tárol!
Egy mutató segítségével töltse fel a tömböt értékekkel!
A mutatón keresztül jelenítse meg a tömb elemeit!
*/

struct Point {
    int x;
    int y;
    int z;
};

void pointer3() {
    Point tomb[10];
    Point *mutato;
    int i;

    for (i = 0, mutato = &tomb[i]; i < 10; i++, mutato++) {
        cout << "Kerem a(z) " << i + 1 << " pont adatait:\n";
        //cin >> (ptomb+i)->x >> (ptomb+i)->y >> (ptomb+i)->z;
        cin >> mutato->x >> mutato->y >> mutato->z;
    }

    for (i = 0, mutato = &tomb[i]; i < 10; i++, mutato++) {
        cout << i + 1 << ".: " << mutato->x << ", " << mutato->y << ", " << mutato->z << endl;
    }
}

int main() {
    pointer3();

    return 0;
}



