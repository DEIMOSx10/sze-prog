#include <iostream>

using namespace std;


/*
*Készítsen programot, amely személyek születési évét, hónapját,
*napját képes tárolni, valamint a személy lakhelyének fővárostól való távolságát km-ben (float)!
*Olvassa be 5 személy adatait a standard bemenetről!
*Rendezze a tömböt a fővárostól való távolságok szerinti csökkenő sorrendbe, majd jelenítse meg az elemeit!
*Rendezze a tömböt a személyek kora szerinti növekvő sorrendbe, majd jelenítse meg az elemeit!
*/

struct szemely {
    struct {
        int ev{};
        int honap{};
        int nap{};
    } szuletes;

    float tav{};
};

int main() {
    return 0;
}

