#include <iostream>

using namespace std;

double* diff(double jel[], int hossz) {
    double *uj = new double[hossz];
    for (int i = 0; i < hossz; ++i) {
        if(i == 0) {
            uj[i] = 0;
            continue;
        }
        uj[i] = jel[i] - jel[i - 1];
    }
    return uj;
}

int main() {

    int hossz = 5;
    double *jel = new double[hossz]{2, 3, 4, 5, 6};

    double *eredmeny = diff(jel, hossz);

    for (int i = 0; i < hossz; ++i) {
        cout << eredmeny[i] << endl;
    }


    return 0;
}
