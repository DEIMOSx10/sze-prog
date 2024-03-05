#include <iostream>

using namespace std;


string uncompress(const string &input) {
    string result;
    string sszam;
    for (int i = 0; i < input.length(); i++) {
        if (isdigit(input[i])) {
            sszam += input[i];
            continue;
        }

        int szam = stoi(sszam);
        sszam = "";
        char betu = input[i];
        for (int j = 0; j < szam; ++j) {
            result += betu;
        }
    }
    //0. eredmény változó (return)
    //1. 2 karakterenként nézem a stringet
    //minden páratlan karakter szám
    //minden páros egy betű
    //2. a két karakter hozzáfűzöm az eredményhez (string +=)
    //3. return eredmény
    return result;
}


string compress(const string &input) {
    string result;

    /*
    *1. azonos karakterig nézem a stringet
    *2. szamlalo letrehozasa
    *2. elmentem, hogy hány azonos karakter volt majd tovabblepek a for ciklusban
    *3. az adott mennyiségű karaktert hozzafuzom a resulthoz
    */
    int szamlalo = 1;
    char betu = input[0];
    for (int i = 1; i < input.length(); ++i) {
        if (input[i] == betu) {
            szamlalo++;
            if (i != input.length() - 1) {
                continue;
            }
        }

        result += to_string(szamlalo);
        szamlalo = 1;
        result += betu;
        betu = input[i];
    }

    return result;
}

int main() {
    cout << uncompress("2c3a1t") << endl;
    cout << uncompress("3n12e2z") << endl;

    cout << compress("ccaaatsss") << endl;
    return 0;
}

