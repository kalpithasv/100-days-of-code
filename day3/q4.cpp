// Convert string to uppercase and lowercase
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string upper, lower;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            upper += str[i] - 32;
            lower += str[i];    
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            upper += str[i];   
            lower += str[i] + 32;
        } else {
            upper += str[i];
            lower += str[i];
        }
    }

    cout << "Uppercase string: " << upper << endl;
    cout << "Lowercase string: " << lower << endl;

    return 0;
}