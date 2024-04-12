#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>

using namespace std;

#define MAX_DB 10
#define MIN_AR 200000
#define MAX_AR 5000000

struct gitar {
    int hurok_szama;
    int ar;
    string hangszedo;
    mutable gitar* kov;
};

//húrok száma, ár, hangszedő típusa

int hurok[] = {6, 7 , 8, 12};
string hangszedok[] = {"humbucker", "single coil"};

gitar* general() {
    srand(time(NULL));
    gitar dummy = {6, 250000, "humbucker"};
    gitar* current = &dummy;

    int gitarDB = (rand() % (MAX_DB + 1));

    for (int i = 0; i < gitarDB; ++i) {
        int hur = hurok[rand() % 4];
        int ar = MIN_AR + (rand() % (MAX_AR - MIN_AR + 1));
        string hang = hangszedok[rand() % 2];
        gitar *uj = new gitar {hur, ar, hang, nullptr};
        current->kov = uj;
        current = current->kov;
    }
    return dummy.kov;
}

gitar* hozzafuz(gitar* elso, int hurok_szama, int ar, string hangszedo) {
    gitar *uj = new gitar {hurok_szama, ar, hangszedo, nullptr};

    if(elso == nullptr) {
        return  uj;
    }

    gitar *utolso = elso;
    while (utolso->kov != nullptr) {
        utolso = utolso->kov;
    }
    utolso->kov = uj;
    return elso;
}

gitar* szures(gitar* lista) {
    if(lista == nullptr) {
        return nullptr;
    }
    gitar dummy = {6, 250000, "humbucker", nullptr};
    gitar* utolso = lista;
    gitar* dUtolso = &dummy;
    while (utolso != nullptr) {
        if(utolso->hurok_szama == 6 && utolso->hangszedo == "single coil") {
            dUtolso->kov = utolso;
            dUtolso = dUtolso->kov;
        }
        if(utolso->hurok_szama == 8 && utolso->hangszedo == "humbucker") {
            dUtolso->kov = utolso;
            dUtolso = dUtolso->kov;
        }
        utolso = utolso->kov;
    }
    if(dUtolso->kov != nullptr) {
        dUtolso->kov = nullptr;
    }

    return dummy.kov;
}

int main() {
    gitar *elso = general();
    srand(time(NULL));


    gitar *lista = hozzafuz(elso, 1, 1, "a");
    gitar *current = elso;
    while (current != nullptr) {
        cout<< current->ar << endl;
        current = current->kov;
    }

    gitar *dLista = szures(elso);
    gitar *dUtolso = dLista;
    while (dUtolso != nullptr) {
        cout << dUtolso->hurok_szama << '\t' << dUtolso->hangszedo << endl;
        dUtolso = dUtolso->kov;
    }

    return 0;
}
