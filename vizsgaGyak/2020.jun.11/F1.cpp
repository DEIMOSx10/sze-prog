#include <iostream>

using namespace std;

struct szivar {
    double hossz;
    int atmero;
    szivar* kov;
};

void darabszam(szivar* horgony, int* churchill, int* toro) {
    szivar *current = horgony;
    while(current != nullptr) {
        if(current->atmero >= 46 && current->atmero <= 48 && current->hossz >= 6.75 && current->hossz <= 8) {
            (*churchill)++;
        }
        if(current->atmero >= 48 && current->atmero <= 54 && current->hossz >= 5.5 && current->hossz <= 6.5){
            (*toro)++;
        }
        current = current->kov;
    }
}

void beilleszt(szivar &horgony,szivar &uj) {
    if(&horgony == nullptr) {
        horgony = uj;
    }
    szivar *current = &horgony;
    while(current->kov != nullptr) {
        current = current->kov;         //léptetés a végéig
    }
    current->kov = &uj;                 //ráfűzés a végére
}


void kiir(szivar &horgony) {
    szivar *current = &horgony;
    while(current != nullptr) {
        cout << current->atmero << "\t" << current->hossz
        << endl;
        current = current->kov;
    }

}

int main() {
    int churchill = 0;
    int toro = 0;

    szivar elso = {7.21, 47};
    szivar masodik = {7.22, 47};
    szivar harmadik = {6, 49};
    szivar negyedik = {6, 49};
    szivar otodik = {15, 55};

    beilleszt(elso, masodik);
    beilleszt(elso, harmadik);
    beilleszt(elso, negyedik);
    beilleszt(elso, otodik);

    darabszam(&elso, &churchill, &toro);
    cout << churchill << "\t" << toro << endl;
    //kiir(elso);

    return 0;
}



