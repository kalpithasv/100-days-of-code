/*
enter no of stdents:2
enter name of student 1 :alice
enter no of subjects: 3
condtructor: memory allocated for alice
enter marks for alice:alice
subject 1: 85
subject 2: 90
subject 3: 95
displaying marks for alice
*/
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int* marks; // dynamic array for marks
    int numSubjects;
public:
    // Constructor
    Student(string studentName, int numSubjects) {
        name = studentName;
        this->numSubjects = numSubjects; // Explicitly use this-> to avoid confusion
        marks = new int[this->numSubjects]; // Allocate memory for marks
        cout << "Constructor: Memory allocated for " << name << endl;
    }

    // Destructor
    ~Student() {
        delete[] marks; // deallocate memory for marks
        cout << "Destructor: Memory deallocated for " << name << endl;
    }

    void inputMarks() {
        cout << "Enter marks for " << name << ":" << endl;
        for (int i = 0; i < numSubjects; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        cout << "Displaying marks for " << name << ":" << endl;
        for (int i = 0; i < numSubjects; i++) {
            cout << "Subject " << (i + 1) << ": " << marks[i] << endl;
        }
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student** students = new Student*[n]; // Dynamic array of pointers to Student objects

    for (int i = 0; i < n; ++i) {
        string name;
        int subjects;
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter number of subjects: ";
        cin >> subjects;

        students[i] = new Student(name, subjects);
        students[i]->inputMarks();
    }

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; ++i) {
        students[i]->displayMarks();
    }

    // Free memory (calls destructor)
    for (int i = 0; i < n; ++i) {
        delete students[i];
    }

    // Free the dynamically allocated array
    delete[] students;
    return 0;
}
