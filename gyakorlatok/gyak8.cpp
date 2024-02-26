#include <iostream>

using namespace std;

/*
Hozzon létre egy egész számot címző mutatót!
Foglalja le az egész számnak szükséges helyet!
Olvasson be egy számot a memóriaterületre!
Írassa ki a képernyőre a beolvasott számot!
Szabadítsa fel a használt memóriaterületet!
*/
void basePointer() {
    const auto szam = new int(6);
    cout << szam;
    delete szam;
}

/*
*Olvasson be egy egész számot billentyűzetről!
Foglaljon helyet annyi egész számnak, amennyi az előzőleg beolvasott szám értéke!
Olvasson be és tároljon el annyi egész számot, amennyi az előzőleg beolvasott szám értéke!
Írassa ki a beolvasott számokat!
Szabadítsa fel a lefoglalt memóriaterületet!
*/

void arrayPointer() {
    int egesz;
    cout << "Adjon meg egy szamot: ";
    cin >> egesz;
    auto memoria = new int[egesz];

    cout << "Adjon meg " << egesz << " db szamot: ";
    for (int i = 0; i < egesz; ++i) {
        cin >> memoria[i];
    }
    for (int i = 0; i < egesz; ++i) {
        cout << memoria[i] << endl;
    }

    delete [] memoria;
}

int main() {
    return 0;
}





