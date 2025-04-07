//reverse number use while loop
#include <iostream>
using namespace std;
int main() {
    int n, reversedNumber = 0;
    cout << "Enter an integer: ";
    cin >> n;
    while (n != 0) {
        int digit = n % 10; // get last digit
        reversedNumber = reversedNumber * 10 + digit; // build reversed number
        n /= 10; // remove last digit from n
    }
    cout << "Reversed Number: " << reversedNumber << endl;
    return 0;
}