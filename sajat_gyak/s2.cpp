/*
 *Készítsen programot, amely személyek nevét és lakhelyének fővárostól való távolságát tárolja km-ben!
 *Olvassa be 5 személy adatait a standard bemenetről,
 *majd rendezze a tömböt a fővárostól való távolságok szerinti csökkenő sorrendbe,
 *végül jelenítse meg az elemeit!
 */

#include <algorithm>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Person {
    string nev;
    double distance;
};

bool compareDistance(const Person& a, const Person& b) {
    return a.distance > b.distance;
}

int main() {
    vector<Person> persons(5);
    cout << "Tavolsagok csokkeno sorrendbe rendezese" << endl;

    for (int i = 0; i < 5; i++) {
        cout << i+1 << ". szemely neve: ";
        cin >> persons[i].nev;
        cout << "Tavolsag: ";
        cin >> persons[i].distance;
    }

    sort(persons.begin(), persons.end(),compareDistance);
    cout << "Tavolsag szerint csokkenoen rendezett adatok:" << endl;
    std::cout << std::setw(8) << std::fixed << std::setprecision(3);
    for (auto person: persons) {
        cout << person.nev << endl << "\t" << person.distance << endl;
    }
}