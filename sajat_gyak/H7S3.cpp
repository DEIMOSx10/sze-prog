/*
Készítsen egy struktúrát, amely térbeli koordinátákat tárol (x, y, z)!
Hozzon létre egy kételemű tömböt, amely koordinátákat tárol!
Egy mutató segítségével töltse fel a tömböt értékekkel!
A mutatón keresztül jelenítse meg a tömb elemeit!

For example:

Input	Result
10 20 30 11 21 31
Toltse fel a(z) 2 elemu tombot x, y, z koordinatakkal!
1. terbeli pont koordinatai: 2. terbeli pont koordinatai: 1. terbeli pont koordinatai: 10 20 30
2. terbeli pont koordinatai: 11 21 31
 */

#include <iostream>

using namespace std;

struct Koordinata {
    int x;
    int y;
    int z;
};

int main() {

    Koordinata tomb[2];

    Koordinata *ptr = tomb;

    cout << "Toltse fel a(z) 2 elemu tombot x, y, z koordinatakkal!" << endl;

    cout << "1. terbeli pont koordinatai: ";
    cin >> ptr[0].x >> ptr[0].y >> ptr[0].z;

    cout << "2. terbeli pont koordinatai: ";
    cin >> ptr[1].x >> ptr[1].y >> ptr[1].z;

    cout << "1. terbeli pont koordinatai: " << ptr[0].x << " " << ptr[0].y << " " << ptr[0].z << endl;
    cout << "2. terbeli pont koordinatai: " << ptr[1].x << " " << ptr[1].y << " " << ptr[1].z << endl;

    return 0;
}