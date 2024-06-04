#include <iostream>
#include <algorithm>
#include <set>


using namespace std;

void charCounter(std::string str, int n) {
    set<char> myset;
    for (auto i = 0; i < str.length(); ++i) {
        str[i] = tolower(str[i]);
    }
    for (auto i = 0; i < str.length(); ++i) {
        unsigned int s = count(str.begin(), str.end(), str[i]);

        if(s == n) {
            myset.insert(str[i]);
        }
    }
    for (auto mychar: myset) {
        cout << mychar << " ";
    }
}

int main() {

    charCounter("OneTwoThree", 1);

    return 0;
}



