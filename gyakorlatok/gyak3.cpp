#include <iostream>

using namespace std;

/*
Olvassunk be 10 számot egy tömbbe
Kérjünk be további számokat, és mondjuk meg, hányszor szerepeltek a 10 elemű tömbben
Ha egyszer sem szerepelt, álljon le a program
*/

#define N 10

void in_array() {
    int n[N] = {1, 2, 3, 99, 5, 6, 7, 99, 98, 99};
    int szam;


    while (true) {
        int szamlalo = 0;

        cout << "Adjon meg egy szamot: ";
        cin >> szam;

        for (const int i: n) {
            if (i == szam) {
                szamlalo++;
            }
        }
        if (szamlalo == 0) {
            cout << "A megadott szam nem szerepel!" << endl;
            break;
        }

        cout << "A megadott szam " << szamlalo << " alkalommal szerepel!" << endl;
    }
}

/*
Olvassunk be 10 számot egy tömbbe!
Kérjünk be két indexet, és cseréljük fel a megfelelő indexű elemeket, majd írjuk ki a tömböt!
Fejlesszük ezt tovább úgy, hogy nem indexet, hanem sorszámot kérünk a felhasználótól!
A sorszám az [1, 10] zárt intervallumba essen, hogy kényelmesebb legyen a program használata a felhasználónak!
Ismét fejlesszük tovább a programot úgy, hogy addig ismételjük a cseréket,
amíg érvénytelen sorszámot (<1 vagy >10) nem kapunk !
*/

void switch_array() {
    int szamok[N] = {1, 2, 3, 99, 5, 6, 7, 99, 98, 99};

    for (const int ertek: szamok) {
        cout << ertek << ", ";
    }

    // const int tar = szamok[index1 - 1];
    // szamok[index1 - 1] = szamok[index2 - 1];
    // szamok[index2 - 1] = tar;

    // szamok[index1 - 1] += szamok[index2 - 1];
    // szamok[index2 - 1] = szamok[index1 - 1] - szamok[index2 - 1];
    // szamok[index1 - 1] = szamok[index1 - 1] - szamok[index2 - 1];
    while (true) {
        int index1;
        int index2;

        cout << endl << "Adja meg a ket sorszamot: ";
        cin >> index1 >> index2;

        if (index1 < 1 || index1 > 10 || index2 < 1 || index2 > 10) {
            break;
        }
        szamok[index1 - 1] = szamok[index1 - 1] ^ szamok[index2 - 1];
        szamok[index2 - 1] = szamok[index1 - 1] ^ szamok[index2 - 1];
        szamok[index1 - 1] = szamok[index1 - 1] ^ szamok[index2 - 1];

        for (const int ertek: szamok) {
            cout << ertek << ", ";
        }
    }
}

int main() {
    return 0;
}
