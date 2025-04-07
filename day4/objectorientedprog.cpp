//object oriented programming

//data ad functions are encapsulated in a class
//anagram of oops with car model
//class is a blueprint for creating objects
//class is a user defined data type that contains data members and member functions
//class is a template for creating objects
//differe btwn function and method
//function is a block of code that performs a specific task and can be called from anywhere in the program  
//method is a function that is associated with an object and can access the object's data members and member functions
//class is a collection of data members and member functions
//it acts as a blueprint for creating objects
//objects are instances of classes when we create an object memory is allocated

//display information of my name and age//get user input for name and age
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;//data member
    int age;

    void getInput() {//member function
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
    }

    void displayInfo() {//member function
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {//main function
    Person p;
    p.getInput();
    p.displayInfo();
    return 0;
}
