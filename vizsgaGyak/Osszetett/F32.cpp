#include <cmath>
#include <iostream>

using namespace std;

void plot(double data[], int n, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < n; ++j) {
            double i2 = ceil((double(height) * data[j]));
            /*
             * data[j] >= (height - i) / height
             */
            if ((height - i) <= i2) {
                cout << 'X';
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

int main() {


    double data[] = {0.0, 0.5, 1.0};
    plot(data, 3, 3);

    return 0;
}



