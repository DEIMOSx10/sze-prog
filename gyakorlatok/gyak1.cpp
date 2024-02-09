#include <iostream>

using namespace std;

/*
 * Fizzbuzz: Koncentrációs játék, ahol 1-től kezdve soroljuk a számokat, és minden 3-mal osztható szám helyett azt kell
 * mondani, hogy Fizz, az 5-tel oszthatók helyett, hogy Buzz. Ha 3-mal és 5-tel is osztható a szám, akkor azt kell
 * mondani, hogy FizzBuzz. Írjunk programot, ami ilyen módon számol 1-től 100-ig!
 */

void fizz_buzz() {
    for (int i = 1; i < 101; ++i) {
        if (i % 15 == 0) {
            cout << "FizzBuzz";
            cout << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz";
            cout << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz";
            cout << endl;
        } else {
            cout << i;
            cout << endl;
        }
    }
}

/*
 *Kérjünk be egy számot, és mondjuk meg róla, hogy prímszám-e
 */

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void print_primes() {
    for (int i = 0; i < 100; ++i) {
        if (is_prime(i)) {
            cout << i;
            cout << endl;
        }
    }
}


int main() {
    print_primes();

    return 0;
}
