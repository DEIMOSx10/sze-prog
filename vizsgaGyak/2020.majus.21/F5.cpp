#include <iostream>
#include <fstream>

using namespace std;

struct Lista
{
    double szam;
    Lista *kov;
};

Lista *listaRendezveBeszur(Lista *elso, double szam) {
    Lista *uj = new Lista{szam, NULL};
    if(elso == NULL) {
        return uj;
    }

    if(uj->szam < elso->szam) {
        uj->kov = elso;
        return uj;
    }

    Lista *utolso = elso;
    while (utolso->kov != NULL && utolso->kov->szam < uj->szam) {
        utolso = utolso->kov;
    }
    uj->kov = utolso->kov;
    utolso->kov = uj;

    return elso;
}

Lista *fajbolListaba(string fajlnev) {
    Lista *ures = NULL;
    ifstream fbe(fajlnev);
    if(!fbe.is_open()) {
        exit(1);
    }

    double beolvas;
    while(fbe >> beolvas) {
        ures = listaRendezveBeszur(ures, beolvas);
    }

    return ures;
}

int minoszlop(int **mtx, int s, int o) {
    int minOszlop = 0;
    int minOsszeg = INT_MAX;
    for (int col = 0; col < o; ++col) {
        int oszlopOsszeg = 0;
        for (int row = 0; row < s; ++row) {
            oszlopOsszeg += mtx[row][col];
        }
        if(oszlopOsszeg < minOsszeg) {
            minOsszeg = oszlopOsszeg;
            minOszlop = col;
        }
    }
    return minOszlop; //
}

struct matrix {
    int sorok; // A matrix sorainak száma

    int oszlopok; // A matrix oszlopainak száma

    double** m;
};

matrix* szorzas(const matrix& m, const double d) {
    matrix* mtx = new matrix{m.sorok, m.oszlopok};
    mtx->m = new double* [m.sorok];
    for (int row = 0; row < m.sorok; ++row) {
        mtx->m[row] = new double[m.oszlopok];
        for (int col = 0; col < m.oszlopok; ++col) {
            mtx->m[row][col] = m.m[row][col] * d;
        }
    }
    return mtx;
}

#include <algorithm>

#define DB 5

struct munka{
    string elvegzo;
    string azonosito;
    int kezdes;
    int hossz;
};

bool utkozes(struct munka m1, struct munka  m2){
    if(m1.kezdes + m1.hossz > m2.kezdes){
        return true;
    }
    return false;
}

void kiiratas(struct munka m){
    cout << m.elvegzo << ' ' << m.azonosito << ' ' << m.kezdes << ' ' << m.kezdes << ':' << m.hossz << endl;
}

bool myfunction (struct munka m1, struct munka  m2) { return (m1.elvegzo<m2.elvegzo); }

void rendez(struct munka m[], int n) {
    sort(m, m + n, myfunction);
}


int main() {

    Lista *s;
    Lista *current;
    s = fajbolListaba("tadata3.txt");
    current = s;
    while(current != NULL) {
        cout << current->szam << endl;
        current = current->kov;
    }



    return 0;
}
