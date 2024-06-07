#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

void examCount(const std::string& fileName) {
    ifstream myfile(fileName);
    if(!myfile.is_open()) {
        cout << "hiba";
        exit(1);
    }

    string line;
    while(getline(myfile, line)) {
        istringstream linestream(line);
        string name;
        int gradeCount = 0;
        int grade = 0;
        // int gradeSum;
        linestream >> name;
        while (linestream >> grade) {
            // gradeSum += grade;
            gradeCount++;
        }
        cout << name << ' ' << gradeCount << endl;
    }
}

int main() {

    examCount("exam1.txt");

    return 0;
}
