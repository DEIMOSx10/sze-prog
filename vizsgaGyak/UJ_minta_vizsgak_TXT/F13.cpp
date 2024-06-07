#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;



int main() {

    ofstream myfile("triangles.txt");

    int a = 0, b = 0, c = 0;

    while (true) {
        cout << "A: ";
        cin >> a;
        if(a < 0) break;
        cout << "B: ";
        cin >> b;
        cout << "C: ";
        cin >> c;

        if(a + b > c && a + c > b && b + c > a) {
            myfile << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}
