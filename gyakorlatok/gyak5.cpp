#include <iostream>

using namespace std;

/*
*Írjon függvényt, amely két számot vár paraméterül és eredményül visszaadja a két szám összegét!
Írjon programot, amely két számot olvas be mindaddig, míg azok összege nem osztható 7-tel!
A feladat megoldásához használja fel az előzőleg megírt függvény!
*/


int sum() {
    int n1;
    int n2;

    cout << "Adjon meg ket szamot: ";
    cin >> n1 >> n2;

    return n1 + n2;
}

void devide_by7() {
    while (true) {
        if (sum() % 7 == 0) {
            break;
        }
    }
}

/*
*Írjon függvényt, amely két számot vár paraméterül és eredményül `1`-et ad vissza,
*ha az első szám nagyobb a másodiknál, `-1`-et, ha a második nagyobb az elsőnél, `0`-át, ha egyenlők!
Olvasson be egy hételemű tömböt!
Írassa ki a képernyőre azon szomszédos elemeket, amelyekre igaz, hogy az első nagyobb a másodiknál!
*/

bool comparison(int &value1) {
    int n1;
    int n2;

    cout << "Adjon meg ket szamot: ";
    cin >> n1 >> n2;

    if (n1 > n2) {
        value1 = 1;
        return true;
    }
    if (n1 < n2) {
        value1 = -1;
        return true;
    }
    if (n1 == n2) {
        value1 = 0;
        return true;
    }
    return false;
}

void comp_array() {
    const int tomb[7] = {2, 5, 5, 12, 76, 11, 9};

    for (int i = 0; i < 6; ++i) {
        if (tomb[i] > tomb[i + 1]) {
            cout << tomb[i] << ", " << tomb[i + 1] << endl;
        }
    }
}

int main() {
}


