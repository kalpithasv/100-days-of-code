#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    
    cout << "Enter the value of N: ";
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    
    cout << "Sum of the first " << N << " natural numbers is: " << sum;
    
    return 0;
}