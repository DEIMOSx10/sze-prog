#include <iostream>
#include <fstream>


using namespace std;


void fajbolOlvas(string fajlnev, int *adatok, int db)
{
    ifstream myfile(fajlnev);
    if(!myfile.is_open()) {
        cout << "hiba";
        exit(1);
    }
    int szam;

    for (int i = 0; i < db; ++i) {
        myfile >> szam;
        cout << szam << endl;
        adatok[i] = szam;
    }
}

double atlag(const int adatok[], int db)
{
    int sum = 0;
    for (int i = 0; i < db; ++i) {
        sum += adatok[i];
    }
    int atlag = sum / db;
    return atlag;
}

double osszes(const int adatok[], int db)
{
    int sum = 0;
    for (int i = 0; i < db; ++i) {
        sum += adatok[i];
    }
    return sum;
}

void kilistaz(const int adatok[], int db)
{
    for (int i = 0; i < db; i++)
    {
        cout << i << ". nap " << adatok[i] << " uj fertozott\n";
    }
}

int main() {

    int adatok[16];
    fajbolOlvas("covid19.txt", adatok, 16);
    kilistaz(adatok, 16);

    return 0;
}
