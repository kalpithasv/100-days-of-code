// public, private, protected examples
#include <iostream>
using namespace std;

class Example {
public:
    int publicVar; // public variable

    // Public method to set values
    void setValues(int p, int q, int r) {
        publicVar = p;
        privateVar = q;
        protectedVar = r;
    }

    // Public method to display values
    void showValues() {
        cout << "Public variable: " << publicVar << endl;
        cout << "Private variable: " << privateVar << endl;
        cout << "Protected variable: " << protectedVar << endl;
    }

private:
    int privateVar; // private variable

protected:
    int protectedVar; // protected variable
};

int main() {
    Example obj;

    // Set values using the public method
    obj.setValues(10, 20, 30);

    // Display values using the public method
    obj.showValues();

    return 0;
}