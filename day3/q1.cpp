#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 

    cout << "Length of the string: " << str.length() << endl;

    if (!str.empty()) {
        cout << "The string is not empty." << endl;
    } else {
        cout << "The string is empty." << endl;
    }

    return 0;
}