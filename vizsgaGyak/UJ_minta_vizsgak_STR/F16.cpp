#include <iostream>

using namespace std;

void spinningLetters(string str) {
    string result;
    for (size_t i = 0; i < str.length(); ++i) {
        result += "a";
    }
    cout << result << endl;
    for (size_t i = 0; i < str.length(); ++i) {
        str[i] = tolower(str[i]);
    }

    char betu = 'b';
    while (result != str) {
        for (size_t i = 0; i < str.length(); ++i) {
            if(str[i] != result[i]) {
                result[i] = betu;
            }
        }
        betu++;
        cout << result << endl;
    }
}

int main() {

    spinningLetters("Jenny");

    return 0;
}



