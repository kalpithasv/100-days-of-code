/*inheritance theory:
one class can inherit from another class. The derived class inherits the members (data and functions) of the base class. The derived class can also have its own members. This allows for code reuse and a hierarchical organization of classes.
There are different types of inheritance in C++:
1. Single inheritance: A derived class inherits from a single base class.
2. Multiple inheritance: A derived class inherits from multiple base classes.
3. Multilevel inheritance: A derived class inherits from a base class, which in turn inherits from another base class.
4. Hierarchical inheritance: Multiple derived classes inherit from a single base class.
5. Hybrid inheritance: A combination of two or more types of inheritance.
6. Friend class: A class that is allowed to access the private and protected members of another class.
7. Friend function: A function that is allowed to access the private and protected members of a class.
8. Virtual inheritance: A way to solve the diamond problem in multiple inheritance by ensuring that only one instance of a base class is inherited by the derived classes.
*/
#include <iostream>
#include <string>
using namespace std;
//use single inheritance one parent one child class employee parent class and developerd child class
class Employee { // Base class
    string name;
    int id;
    string language;
    string project;
public:
    Employee(string n, int i, string l, string p) { // Constructor
        name = n;
        id = i;
        language = l;
        project = p;
    }
    void displayinfo() { // Member function to display information
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Language: " << language << endl;
        cout << "Project: " << project << endl;
    }
};
class Developer : public Employee { // Derived class
public:
    Developer(string n, int i, string l, string p) : Employee(n, i, l, p) { // Constructor
        // Constructor of base class is called automatically
    }
    void displayinfo() { // Overriding the displayinfo function
        cout << "Developer Information:" << endl;
        Employee::displayinfo(); // Call base class function
    }

};
int main() {
    Developer dev("Kalps",101,"C++","AI Chatbot");
    dev.displayinfo();
    return 0; // Creating an object of the derived class
}