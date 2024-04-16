#include <algorithm>
#include <iostream>
#include <string>


using namespace std;

string szokozkiszed(string &s){
    // s.erase(remove_if(s.begin(), s.end(), isspace), s.end());
    string result;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i] != ' ') {
            result += s[i];
        }
    }

    return result;
}

void betubolszam(string &s){
    for (size_t i = 0; i < s.length(); ++i) {
        if(islower(s[i])) {
            cout << int(s[i]) - 'a' + 1;
        } else {
            cout << s[i];
        }
    }
}

int main() {

    string teszt1 = "a b c d e f";
    cout << teszt1 << "\n";
    cout << szokozkiszed(teszt1) << "\n";
    betubolszam(teszt1);

    return 0;
}
