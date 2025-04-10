// Stack implementation
#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;       // Dynamic array to store stack elements
    int top;        // Index of the top element
    int capacity;   // Maximum capacity of the stack

public:
    // Constructor to initialize stack
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    // Push an element onto the stack
    void push(int x) {
        if (top == capacity - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    // Pop an element from the stack
    void popElement() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    // Peek at the top element of the stack
    int peek() const {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    // Display all elements in the stack
    void display() const {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Clear the stack
    void clear() {
        top = -1;
    }

    // Destructor to free allocated memory
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(5); // Create a stack with a capacity of 5

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Display Elements:" << endl;
    s.display();

    cout << "Top Element: " << s.peek() << endl;

    s.popElement();
    cout << "After popping an element:" << endl;
    s.display();

    s.clear();
    cout << "After clearing the stack:" << endl;
    s.display();

    return 0;
}