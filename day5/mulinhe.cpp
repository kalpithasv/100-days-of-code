//multilevel inheritance child, father ,grandfather  using legacy ,guidance and dream 
#include <iostream>
#include <string>
using namespace std;
//multilevel inheritance child, father ,grandfather  using legacy ,guidance and dream 
class Grandfather { // Base class
    string name;
    int id;
    string legacy;
public:
    Grandfather(string n, int i, string l) { // Constructor
        name = n;
        id = i;
        legacy = l;
    }
    void displayinfo() { // Member function to display information
        cout << "Grandfather Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Legacy: " << legacy << endl;
    }
};
class Father : public Grandfather { // Derived class
    string guidance;
public:
    Father(string n, int i, string l, string g) : Grandfather(n, i, l) { // Constructor
        guidance = g;
    }
    void displayinfo() { // Overriding the displayinfo function
        cout << "Father Information:" << endl;
        Grandfather::displayinfo(); // Call base class function
        cout << "Guidance: " << guidance << endl;
    }
};
class Child : public Father { // Derived class
    string dream;
public:
    Child(string n, int i, string l, string g, string d) : Father(n, i, l, g) { // Constructor
        dream = d;
    }
    void displayinfo() { // Overriding the displayinfo function
        cout << "Child Information:" << endl;
        Father::displayinfo(); // Call base class function
        cout << "Dream: " << dream << endl;
    }
};
int main() {
    Child c("Kalps", 101, "C++", "AI Chatbot", "AI Developer"); // Creating an object of the derived class
    c.displayinfo(); // Displaying information
    return 0;
}