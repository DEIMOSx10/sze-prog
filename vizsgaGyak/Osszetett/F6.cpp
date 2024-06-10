#include <iostream>
#include <cstring>

using namespace std;

#define THOSSZ 128

int loadText(char t_bk[]) {
    string mystr;
    getline(cin, mystr);
    int hossz = 0;
    for (size_t i = 0; i < mystr.length(); ++i) {
        // cout << mystr[i] << endl;
        if (mystr[i] == '#') {
            // cout << "#" << endl;
            break;
        }
        hossz++;
        t_bk[i] = mystr[i];
    }

    return hossz;
}

void upperNumber(char un_bl[], int lm) {
    int j = 0;
    for (int i = 0; i < lm; ++i) {
        if(isupper(un_bl[i])) {
            un_bl[i] = j + '0';
            j++;
        }
    }
    cout << un_bl << endl << "Cserék: " << j;
}

int main() {

    char t[THOSSZ] = {};
    int hossz = loadText(t);
    // cout << hossz << endl << t;

    upperNumber(t, hossz);

    return 0;
}



