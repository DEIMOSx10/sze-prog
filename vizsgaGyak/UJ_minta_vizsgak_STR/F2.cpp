#include <iostream>
#include <algorithm>


using namespace std;

void charCounter(std::string str, int n) {
    for (int i = 0; i < str.length(); ++i) {
        str[i] = tolower(str[i]);

        int s = count(str.begin(), str.end(), str[i]);

        if(s == n) {
            cout << str[i] << " ";
        }
    }


}

int main() {

    charCounter("OneTwoThree", 1);

    return 0;
}



