#include <iostream>
#include <cmath>

#define THOSSZ 6

using namespace std;

double uploading(double up_bl[]) {
    double szamok = 0;
    for (int i = 0; i < THOSSZ;) {
        cin >> szamok;
        if (szamok > -10 && szamok <= 0) {
            up_bl[i] = szamok;
            i++;
        }
    }
    double kul = pow(up_bl[0], 3);
    for (int i = 0; i < THOSSZ; ++i) {
        kul -= pow(up_bl[i], 3);
    }
    return kul;
}

void writesOut(double diff) {
    if (diff <= 0 && diff >= -9) {
        cout << "Egyjegyű: " << diff;
    }
    if (diff <= -10 && diff >= -19) {
        cout << "Kétjegyű: " << diff;
    }
    if (diff <= -99) {
        cout << "Több mint kétjegyű: " << diff;
    }
}

int main() {

    double t[THOSSZ] = {};
    double diff = uploading(t);
    writesOut(diff);

    return 0;
}



