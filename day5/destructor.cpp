//destructor no return type no void no parameters
//can't be overloaded
//destructor is a special member function of a class that is automatically called when an object of the class is destroyed
//called when object goes out of scope or explicitly deleted
//used to release resources allocated to the object
//called when delete an object using new operator
#include <iostream>
using namespace std;
class Demo {
public:
    Demo() { // constructor
        cout << "Constructor called!" << endl;
    }
    ~Demo() { // destructor
        cout << "Destructor called!" << endl;
    }
};
int main() {
    Demo obj; // object created, constructor called
    // some operations with obj
    return 0; // destructor called when obj goes out of scope
}
