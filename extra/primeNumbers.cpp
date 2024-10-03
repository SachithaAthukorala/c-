#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) 
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int x, y;

    // Taking input from the user
    cout << "Enter first number (x): ";
    cin >> x;
    cout << "Enter second number (y): ";
    cin >> y;

    // Check if both x and y are prime
    bool isXPrime = isPrime(x);
    bool isYPrime = isPrime(y);

    // Display the results based on the conditions
    if (isXPrime && isYPrime) {
        cout << "Both " << x << " and " << y << " are primes." << endl;
    } else if (isXPrime) {
        cout << "Only Num " << x << " is a Prime." << endl;
    } else if (isYPrime) {
        cout << "Only Num " << y << " is a Prime." << endl;
    } else {
        cout << "Both are not primes." << endl;
    }

    return 0;
}
