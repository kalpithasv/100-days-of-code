#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1, i = 1;
    
    // Taking input from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } 
    else {
        while (i <= num) {
            factorial *= i;
            i++;
        }

        cout << "Factorial of " << num << " is: " << factorial << endl;
    }

    return 0;
}
