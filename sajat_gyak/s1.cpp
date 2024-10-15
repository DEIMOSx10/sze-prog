#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct szul {
    int ev;
    int honap;
    int nap;
} ;

bool compSzul(szul& a, szul& b) {
    if(a.ev != b.ev) {
        return a.ev > b.ev;
    }
    if(a.honap != b.honap) {
        return a.honap > b.honap;
    }
    return a.nap > b.nap;
}

int main(){
    cout << "Datumok csokkeno sorrendbe rendezese" << endl;
    vector<szul> szuletesek;
    for(int i = 1; i < 6; i++){
        cout << i << ". szemely szuletesi eve: ";
        cin >> szuletesek[i].ev;
        cout << "Szuletes honapja: ";
        cin >> szuletesek[i].honap;
        cout << "Szuletes napja: ";
        cin >> szuletesek[i].nap;
    }

    sort(szuletesek.begin(), szuletesek.end(), compSzul);
    cout << "Kor szerint novekvoen rendezett adatok:" << endl;
    for (auto szul: szuletesek) {
        cout << szul.ev << '.' << szul.honap << '.' << szul.nap;
    }

    return 0;
}
