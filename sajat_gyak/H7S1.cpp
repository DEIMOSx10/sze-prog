/*
Hozzon létre egy egész számot tároló változót és hozzá egy azt címző mutatót!
Olvassa be a szám értékét a mutatón keresztül!
Írassa ki a kimenetre a szám értékét és memóriacímét az első változó segítségével!
Írassa ki ezeket a mutató változó segítségével is!
Végül írassa ki a mutató címét is!
 */

#include <iostream>

using namespace  std;

// int main() {
//     int szamok;
//     int *ptr = &szamok;
//
//     cout << "Adja meg a szam erteket: ";
//     cin >> *ptr;
//
//
//     cout << "A szamok erteke: " << szamok;
//     cout << "\nMemoria cime: " << &szamok;
//
//     cout << "\nA mutaton keresztul ertek: " << *ptr << endl;
//     cout << "A mutaton keresztul memoria cim: " << ptr;
//
//     cout << "\nMutato cime: " << &ptr;
//
//     return 0;
// }


/*
Hozz létre egy lebegőpontos (float) típusú változót, amely egy valós számot tárol.
Hozz létre egy mutatót, amely a lebegőpontos változót címzi.
Olvass be egy értéket a mutatón keresztül a felhasználótól.
Írd ki a lebegőpontos változó értékét és memóriacímét a mutató segítségével.
Írd ki a mutató által címzett értéket és a mutató memóriacímét közvetlenül a változó segítségével.
Végül írd ki a mutató címét, azaz magának a mutatónak a címét.
 */


int main() {
    float szam;
    float *ptr = &szam;

    cout << "Adjon meg egy erteket: ";
    cin >> *ptr;

    cout << "A lebegopontos valtozo erteke: " << *ptr << endl;
    cout << "A lebegopontos valtozo memoria cime: " << ptr << endl;

    cout << "A lebegopontos valtozo erteke: " << szam << endl;
    cout << "A lebegopontos valtozo memoria cime: " << &szam << endl;

    cout << "A mutato cime: " << &ptr;

    return 0;
}