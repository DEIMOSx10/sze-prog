#include <iostream>

using namespace std;


/*
*Kérjünk egy számot, rajzoljunk ennyi karakter széles négyzetet a képernyőre
*Rajzoljuk be a két átlót is
*/

void negyzet() {
    int n = 15;

    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            if (row == col || row + col == n - 1) {
                cout << '*';
                continue;
            }
            if (row == 0 || row == n - 1) {
                cout << '*';
                continue;
            }
            if (col > 0 && col < n - 1) {
                cout << ' ';
                continue;
            }
            cout << '*';
        }
        cout << endl;
    }
}

/*
*Magasság bekérése után lépcső kirajzolása (i. sorban i db '*')
*Lépcső függőlegesen tükrözve (jobbra igazítva a csillagokat)
*/

void draw_stairs() {
    int n = 0;

    cout << "Adja meg a magassagot: ";
    cin >> n;
    cout << endl;

    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            if (col < n - row - 1) {
                cout << ' ';
            } else {
                cout << '*';
            }
        }
        cout << endl;
    }
}

int main() {
    negyzet();

    return 0;
}
