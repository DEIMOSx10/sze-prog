#include <iostream>
#include <string>
#include <cctype>
#include <cstring>


using namespace std;


std::string consonants(const std::string& word) {
    string result;
    for (char c: word) {
        if(isalpha(c) && !strchr("euioaEIOAU", c)) {
            result += c;
        }
    }
    return result;
}



int main() {

    std::cout << consonants("This is the beginning of a beautiful friendship.") << std::endl;

    return 0;
}



