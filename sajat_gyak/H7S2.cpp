#include <iostream>

using namespace std;

int main() {
    // 6 elemű tömb deklarálása
    int tomb1[6];

    // 10 elemű mutatótároló tömb deklarálása (int* mutatókat tárol)
    int* tomb2[10];

    // Beolvasás a 6 elemű tömbbe
    cout << "Adjon meg 6 egesz szamot a tomb1-be:" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> tomb1[i];
    }

    // Beolvasás 10 számra
    cout << "Adjon meg 10 egesz szamot:" << endl;
    for (int i = 0; i < 10; i++) {
        int szam;
        cin >> szam;

        // Keresés a 6 elemű tömbben
        bool megtalalva = false;
        for (int j = 0; j < 6; j++) {
            if (tomb1[j] == szam) {
                // Ha megtalálta, elmentjük a címét
                tomb2[i] = &tomb1[j];
                megtalalva = true;
                break;
            }
        }

        // Ha nem találta meg, null mutatót tárolunk
        if (!megtalalva) {
            tomb2[i] = nullptr;
        }
    }

    // Eredmények kiíratása
    cout << "A tomb2 ertekei es memoria cimei:" << endl;
    for (int i = 0; i < 10; i++) {
        if (tomb2[i] != nullptr) {
            cout << "Ertek: " << *tomb2[i] << ", Memoriacim: " << tomb2[i] << endl;
        } else {
            cout << "Null pointer" << endl;
        }
    }

    return 0;
}