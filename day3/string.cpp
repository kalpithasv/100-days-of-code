#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);  // Accept full name with spaces

    // Print greeting and length
    cout << "Hello, " << name << endl;
    cout << "Your name has " << name.length() << " characters." << endl;

    // Check if string is not empty
    if (!name.empty()) {
        cout << "Your name is not empty." << endl;
    }

    // Append some text
    name.append(" welcome!");
    cout << "After appending: " << name << endl;

    // Substring example
    cout << "Substring (first 5 characters): " << name.substr(0, 5) << endl;

    // Find example
    string anothername="John";
    if (name.compare(anothername) == 0) {
        cout << "'s' is present in your name." << endl;
    } else {
        cout << "'s' is NOT present in your name." << endl;
    }

    return 0;
}
