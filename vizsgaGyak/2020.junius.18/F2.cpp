#include <iostream>


using namespace std;

bool lepesEllenor(unsigned short bolS, unsigned short bolO, unsigned short baS, unsigned short baO)
{
    cout << "["<< bolS << "," << bolO << "] -> [" << baS << "," << baO << "]";

    if(abs((bolS - baS) * (bolO - baO)) == 2) return true;

    return false; // ezt átírni
}

int main() {

    cout << (lepesEllenor(3,3,2,1) ? " helyes lepes" : " hibas lepes") << "\n";
    cout << (lepesEllenor(3,3,1,2) ? " helyes lepes" : " hibas lepes") << "\n";
    cout << (lepesEllenor(3,3,4,1) ? " helyes lepes" : " hibas lepes") << "\n";
    cout << (lepesEllenor(3,3,5,2) ? " helyes lepes" : " hibas lepes") << "\n";
    cout << (lepesEllenor(3,3,3,4) ? " helyes lepes" : " hibas lepes") << "\n";
    cout << (lepesEllenor(9,9,8,7) ? " helyes lepes" : " hibas lepes") << "\n";

    return 0;
}
