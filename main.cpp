#include <iostream>

using namespace std;

bool isPrime(int number) {
    for (int i = 2; i < number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void generatePrime(int num) {
    for (int i = 2; i <= num; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}


int main() {

    // Write a function to generate all prime numbers from 2 to N

    int num1{};
    cin >> num1;
    generatePrime(num1);

    return 0;
}