#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;

    cout << "Enter a positive number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (i = 2; i * i <= num; i++) { 
            if (num % i == 0) {
                isPrime = false; 
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";

    return 0;
}
