#include <fstream>
#include <iostream>

using namespace std;

void rotateLines(const std::string& fileName) {
    ifstream myfile(fileName);
    if(!myfile.is_open()) {
        cout << "hiba";
        exit(1);
    }

    string line;
    while(getline(myfile, line)) {
        for (size_t i = 0; i < line.length(); ++i) {
            for (size_t j = 0; j < line.length(); ++j) {
                cout << line[(i+j) % line.length()];
            }
            cout << endl;
        }
    }
}

int main() {

    rotateLines("words1.txt");

    return 0;
}
