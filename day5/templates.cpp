/*
template is feature of C++ that allows you to create generic classes and functions.
It enables you to write code that can work with any data type without the need for explicit type definitions.
generic template is a class or function that can operate with any data type.
class template is a blueprint for creating classes that can work with any data type.
function template is a blueprint for creating functions that can work with any data type.
*/

//function template syntax
// template <typename T> // or template <class T>
// T function_name(T arg1, T arg2) {
//     // function body
//     return arg1 + arg2; // Example: adding two values of type T
// }
//// class template syntax
// template <typename T> // or template <class T>
// class ClassName {
// public:
//     T member_variable; // Member variable of type T
//     ClassName(T arg) { // Constructor
//         member_variable = arg; // Initialize member variable
//     }
//     void display() { // Member function to display the value
//         cout << "Value: " << member_variable << endl; // Display the value
//     }
// };
#include <iostream>
using namespace std;

template <typename T> // or template <class T>
T add(T a,T b) { // Function template to add two values of type T
    return a + b; // Return the sum of a and b
}
int main(){
    int a = 5, b = 10; // Integer variables
    cout<<"Sum of integers: " << add(a, b) << endl; // Call function template with int type

    float x = 5.5, y = 10.5; // Float variables
    cout << "Sum of floats: " << add(x, y) << endl; // Call function template with float type
    
    return 0;

}