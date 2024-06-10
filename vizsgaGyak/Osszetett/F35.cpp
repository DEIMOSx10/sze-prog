#include <iostream>
#include <climits>

using namespace std;

struct curse {
    string movie;
    string word;
    double time;
};

string getFirstCurse(struct curse curses[], int n) {
    double min = INT_MAX;
    string minM;
    for (int i = 0; i < n; ++i) {
        if (curses[i].time < min) {
            min = curses[i].time;
            minM = curses[i].movie;
        }
    }
    return minM;
}

int main() {

    curse karomkodasok[3] = {
        {"Ponyva Regény", "fasz", 1.32},
        {"Django elszabadul", "köcsög", 2.4},
        {"Kill Bill", "pöcs", 0.3}
    };

    getFirstCurse(karomkodasok, 3);

    return 0;
}



