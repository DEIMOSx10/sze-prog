#include <iostream>
#include <string.h>


using namespace std;

#define THOSSZ 50

/*
- Írjon egy programot, amely 2 db felhasználói függvényt használ.
- Az egyik az
- [ ] int feltolt(char s_tb[]),
- amely feltölt egy karakter tömböt (1. paraméter) ékezet nélküli szöveggel az ENTER billentyű leütéséig,
- vagy maximum 50db karakterig.

- Bekérési információk és hibaüzenetek kiírása nem kell!

- [x] A tömb hosszát szimbolikus állandóval állítsa be.

- [x] A függvény visszatérési értéke a feltöltött tömb hossza legyen.

- A másik függvény a
- [] void torol(char s_tb[], int h),
- [] pedig a feltöltött tömb (1. paraméter) minden második elemét törölje,
- [] majd az így módosított tömb tartalmát írja is ki.

- [] A torol függvény 2. paramétere a feltolt függvény visszatérési értéke.
*/

int feltolt(char s_tb[THOSSZ]) {
    string sor;
    cin >> sor;
    int szamlalo = 0;

    while (szamlalo < THOSSZ && szamlalo <= sor.length()) {
        s_tb[szamlalo] = sor[szamlalo];
        szamlalo++;
    }
    return strlen(s_tb);
}

void torol(char s_tb[], int h) {
    int i, j;
    for (i = h - 1; i > 0; i--) {
        if (i % 2 == 0) {
            for (j = i; j < h + 1; j++) {
                s_tb[j - 1] = s_tb[j];
            }
            h--;
        }
    }
    cout << s_tb << endl;
}

int main() {
    char tomb[THOSSZ];
    int n = feltolt(tomb);
    torol(tomb,n);
    return 0;
}
