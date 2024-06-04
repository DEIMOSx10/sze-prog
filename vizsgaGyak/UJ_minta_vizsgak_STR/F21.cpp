#include <iostream>
#include <algorithm>


using namespace std;

void fillRect(int width, int height, std::string text) {
    for (int row = 0; row < height; ++row) {
        for (int col = 0; col < width; ++col) {
            cout << text[(col+row) % text.length()];
        }
        cout << endl;
    }
}

int main() {

    fillRect(9, 7, "C++Programming");

    return 0;
}



