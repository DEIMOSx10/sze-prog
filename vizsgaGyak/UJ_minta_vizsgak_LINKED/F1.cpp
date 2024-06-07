#include <iostream>

using namespace std;

struct elem {
    string szo;
    elem* kov;
};

elem* beszur(elem* horgony, std::string szo) {
    auto elem1 = new elem{szo, nullptr};
    if(horgony == nullptr) {    //mikor nincs meg lánc
        return elem1;
    }

    if (horgony->szo > szo) {
        elem1->kov = horgony;
        return elem1;
    }

    elem *current = horgony;    //létrehozom a currentet
    while (current->kov != nullptr && current->kov->szo < szo) {   //lépek a megfelelő helyig
        current = current->kov;
    }

    elem1->kov = current->kov;                  //ez a harom sor a beszurás a listába
    current->kov = elem1;
    return horgony;
}

int main() {

    elem* horgony = nullptr;
    horgony = beszur(horgony, "banan");
    horgony = beszur(horgony, "dio");
    horgony = beszur(horgony, "alma");
    horgony = beszur(horgony, "cekla");
    elem *current = horgony;
    while (current != nullptr) {
        cout << current->szo << endl;
        current = current->kov;
    }

    return 0;
}
