//dynamic memory allocation
/*
it allows you to allocate memory at runtime using pointers this is especially used when
you don't know the size of data structure
syntax:
int *ptr = new int[size]; // allocate memory for an array of size 'size'
int *ptr = new int; // allocate memory for a single integer
*ptr = 10; // assign value to the allocated memory
delete ptr; // deallocate memory
delete[] ptr; // deallocate memory for an array
*/
#include <iostream>
using namespace std;
int main(){
    int size=5;
    int *arr = new int[size]; // dynamic memory allocation for an array of size 5
//suppose we want to increase size
    int newSize=10;
    int *newArr = new int[newSize]; // allocate memory for a new array of size 10
    for(int i=0;i<size;i++){
        newArr[i]=arr[i]; // copy old array elements to new array
    }
    delete[] arr; // deallocate memory for the old array
    //copy old values
    arr=newArr; // point arr to new array
    //assign new values
    for (int i=size;i<newSize;i++){
        arr[i]=i+1; // assign values to the new array
    }
    cout<<"New array elements: ";
    for(int i=0;i<newSize;i++){
        cout<<arr[i]<<" "; // print the new array elements
    }
    //deallocate memory for the new array
    delete[] arr; // deallocate memory for the new array
    
for (int i=0;i<size;i++){
        arr[i]=i+1; // assign values to the array
    }
    cout<<"Array elements: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "; // print the array elements
    }
    delete[] arr; // deallocate memory for the array
    return 0;
}
