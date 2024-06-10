#include <iostream>
#include <climits>

using namespace std;

bool perceptron(double* w, double* x, double b, int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += w[i] * x[i];
    }
    return sum + b > 0;
}

int main() {



    return 0;
}



