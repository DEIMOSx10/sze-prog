#include <iostream>
#include <map>

using namespace std;


char mostFrequentChar(string input) {
    char result = 0;
    map<char, int> szamlalo;

    for (int i = 0; i < input.length(); ++i) {
        szamlalo[input[i]]++;
    }
    int maxi = 0;
    for (auto [betu, elofordulas]: szamlalo) {
        if (elofordulas > maxi) {
            maxi = elofordulas;
            result = betu;
        }
    }

    return result;
}

int main() {
    cout << mostFrequentChar("bookeeper");

    return 0;
}
