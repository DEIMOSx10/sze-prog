#include <iostream>
#include <climits>

using namespace std;


int maxoszlop(int **mtx, int s, int o) {
    int maxi = 0;
    int max = INT_MIN;

    for (int i = 0; i < o; ++i) {
        int sum = 0;
        for (int j = 0; j < s; ++j) {
            sum += mtx[j][i];
        }
        if(sum > max) {
            max = sum;
            maxi = i;
        }
    }
    return maxi;
}

int main() {


    int sorok = 4, oszlopok = 5;

    int mtx[sorok][oszlopok] ={
    {1, 2, 3, 4, 4 },
    {8, 9, 3, 6, 5 },
    {1, 6, 56, 45, 5 },
    {1, 6, 3, 4, 4 }
    };


    cout << "A legnagyobb osszegu oszlop indexe: " << maxoszlop(mtx, sorok, oszlopok) << "\n";



    return 0;
}
