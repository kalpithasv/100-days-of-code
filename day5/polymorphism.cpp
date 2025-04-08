/*
polymorphism many forms
polymorphism is a core concept in object-oriented programming (OOP) that allows 
objects of different classes to be treated as objects of a common base class. 
It enables a single interface to represent different underlying forms (data types). 
In C++, polymorphism is primarily achieved through function overloading and 
operator overloading, as well as through inheritance and virtual functions.

two types of polymorphism:
1. Compile-time polymorphism (also known as static polymorphism function or method overloading): This type of polymorphism 
    is resolved during compile time. It is achieved through function overloading and operator overloading. 
    In function overloading, multiple functions can have the same name but different parameters. 
    In operator overloading, operators can be redefined to work with user-defined data types.
2. Runtime polymorphism (also known as dynamic polymorphism): This type of polymorphism is resolved during runtime.
    It is achieved through inheritance and virtual functions. In runtime polymorphism,
    a base class reference or pointer can refer to objects of derived classes, 
    and the appropriate function is called based on the actual object type at runtime.
compile time polymorphism (also known as static polymorphism) and runtime-earlt binding


*/
#include <iostream>
#include <string>
using namespace std;
// Compile-time polymorphism (function overloading)
class Animal { // Base class
public:
    void sound() { // Function with no parameters
        cout << "Animal makes a sound." << endl;
    }
    void sound(string animal) { // Function with one parameter
        cout << animal << " makes a sound." << endl;
    }
};
class Dog : public Animal { // Derived class
public:
    void sound() { // Overriding the sound function
        cout << "Dog barks." << endl;
    }
};
class Cat : public Animal { // Derived class
public:
    void sound() { // Overriding the sound function
        cout << "Cat meows." << endl;
    }
};
int main() {
    Animal a; // Base class object
    Dog d; // Derived class object
    Cat c; // Derived class object

    a.sound(); // Calls base class function
    a.sound("Dog"); // Calls overloaded function with parameter

    d.sound(); // Calls derived class function (overridden)
    c.sound(); // Calls derived class function (overridden)

    Animal* ptr; // Base class pointer
    ptr = &d; // Pointing to derived class object
    ptr->sound(); // Calls derived class function (runtime polymorphism)

    ptr = &c; // Pointing to another derived class object
    ptr->sound(); // Calls derived class function (runtime polymorphism)

    return 0;
}
