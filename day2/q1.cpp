#include <iostream>
using namespace std;

int main() {
    int num, i = 2;
    
    cout << "Enter the value of N: ";
    cin >> num;
    
    while (i <= num) {
        cout << i << " ";
        i += 2; 
    }
    
    return 0;
}
