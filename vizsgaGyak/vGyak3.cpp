#include <fstream>
#include <iostream>

using namespace std;

#define

/*
Írjon egy
string tri_result(string fbe) függvényt,
amely kiírja egy adott triatlon verseny győztesének az azonosítóját(licence),
és a cél-idejét; óra:perc:másodperc alakban.

A cél-idő a következő részeredményekből tevődik össze:
úszás + kerékpár + futás + depo.

A kiírás pontos formátumát a példa mutatja!

A célba érkezett versenyzők számát és a részidőket
egy adat-file tartalmazza,
amelynek a létezését ellenőrizni kell!
A hibaüzenet formátumát a példa mutatja!
Ennek az állománynak az azonosítója lesz a tri_result függvény paramétere.

Az adat-file első sora egy pozitív egész szám,
amely a célba érkezettek száma.
A további mindenegyes sora egy-egy sportolót azonosít
és tartalmazza a részidejeit másodpercben, a következők szerint:
licence
úszás-idő
kerékpár-idő
futás-idő
depó-idő.

Az adatokat szóközök választják el egymástól!Pl.: df-572ki 1500 4500 2500 125

Az adat-file elemeit tárolja el egy struktúra-tömbbe,
amihez használja a megadott struct triathlete típust!
A struktúratömböt a dinamikus memóriába hozza létre!
A versenyzők kiszámolt cél-idejeit (másodpercben) az int sum tagváltozókba mentsék el.
Ezen adatokból kell megállapítani a győztes
és az utolsó versenyző idejeit.
Ugyanis a függvény visszatérési értéke az utolsó versenyző licence legyen.

Ha az adat-file nem létezik, akkor a visszatérési érték az ”N/A!” karaktersorozat legyen!
(A cerr << utasítást NE használják! moodle…)
*/


string tri_result(string fbe) {
    ifstream fbe("input.txt");
    if(!fbe.is_open()) {
        exit(1);
    }

}

int main() {

    return 0;
}
