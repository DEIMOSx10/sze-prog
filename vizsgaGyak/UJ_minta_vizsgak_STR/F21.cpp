#include <iostream>
#include <algorithm>


using namespace std;

void fillRect(int width, int height, std::string text) {
    for (int row = 0; row < height; ++row) {
        cout << text.substr(row, width) << endl;
    }
}

int main() {

    fillRect(9, 7, "C++Programming");

    return 0;
}



