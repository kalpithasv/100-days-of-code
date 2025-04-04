#include <iostream>
using namespace std;

// Call by Value
void modifyValue(int x) {
    x = x + 10;
    cout << "Inside modifyValue (Call by Value): x = " << x << endl;
}

// Call by Reference
void modifyReference(int &x) {
    x = x + 10;
    cout << "Inside modifyReference (Call by Reference): x = " << x << endl;
}

// Call by Pointer
void modifyPointer(int *x) {
    *x = *x + 10;
    cout << "Inside modifyPointer (Call by Pointer): x = " << *x << endl;
}

int main() {
    int a = 5, b = 5, c = 5;

    cout << "--- Initial Values ---" << endl;
    cout << "a (Value)     = " << a << endl;
    cout << "b (Reference) = " << b << endl;
    cout << "c (Pointer)   = " << c << endl;
    cout << endl;

    // Call by Value
    modifyValue(a);
    cout << "After modifyValue: a = " << a << " (Unchanged)" << endl << endl;

    // Call by Reference
    modifyReference(b);
    cout << "After modifyReference: b = " << b << " (Changed)" << endl << endl;

    // Call by Pointer
    modifyPointer(&c);
    cout << "After modifyPointer: c = " << c << " (Changed)" << endl;

    return 0;
}
