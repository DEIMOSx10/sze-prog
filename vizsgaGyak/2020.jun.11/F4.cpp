#include <iostream>
#include <vector>

using namespace std;

double** v2m(double* v, int hossz, int sor, int oszlop) {
    double** m = new double*[sor];
    for (int i = 0; i < sor; ++i) {
        m[i] = new double[oszlop];          //how to make a matrix
    }
    int vi = 0;
    for (int i = 0; i < sor; ++i) {
        for (int j = 0; j < oszlop; ++j) {
            m[i][j] = v[vi];
            vi++;
        }
    }
    return m;
}

int main() {
    int hossz = 6;
    int sor = 2;
    int oszlop = 3;

    double *v = new double[hossz]{1, 2, 3, 4, 5, 6};


    return 0;
}
