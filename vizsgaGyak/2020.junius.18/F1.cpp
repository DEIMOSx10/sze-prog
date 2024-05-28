#include <iostream>


using namespace std;

int binTizesbe(string n)
{
    cout << n << " -- ";
    int i = std::stoi(n, nullptr, 2);
    return i;
}


int main() {

    cout << binTizesbe("00000001") << "\n";
    cout << binTizesbe("00000010") << "\n";
    cout << binTizesbe("00000100") << "\n";
    cout << binTizesbe("00000101") << "\n";
    cout << binTizesbe("10000001") << "\n";

    return 0;
}
