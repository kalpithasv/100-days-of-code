#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, subStr;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter substring to find: ";
    getline(cin, subStr);

    size_t pos = str.find(subStr);
    if (pos != string::npos) {
        cout << "Substring found at position: " << pos << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}