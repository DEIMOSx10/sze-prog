#include <iostream>
#include <vector>

using namespace std;


float maxValue(vector<float> input) {
    float maxi = 0;

    for (auto szam: input) {
        if (szam > maxi) {
            maxi = szam;
        }
    }

    return maxi;
}

int main() {
    const std::vector<float> numbers{4, 7, 2, 8, 10, 9};
    cout << maxValue(numbers) << endl;

    return 0;
}
