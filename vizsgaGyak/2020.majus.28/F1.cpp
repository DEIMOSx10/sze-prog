#include <iostream>
#include <cctype>

using namespace std;

unsigned int textSum(std::string text) {
    int sum = 0;
    for (size_t i = 0; i < text.length(); ++i) {
        if(!islower(text[i])) {
            text[i] = tolower(text[i]);
        }
        if(isalpha(text[i])) {
            sum += int(text[i]);
        }
        if(isdigit(text[i])) {
            sum += text[i];
        }

    }
    return sum;
}

int main() {

    std::string s("AVav09");
    unsigned d0 = textSum(s);
    std::cout << "Textsum: " << d0 << '\n';

    return 0;
}
