//Implement a function to remove all digits from a given string.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 
    string result; 
    for (char ch : str) { 
        if (!isdigit(ch)) {
            result += ch; 
        }
    }

    cout << "String after removing digits: " << result << endl; 

    return 0; 
}