//linear search
#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; 
}

//find middle element of array
int findMiddle(int arr[], int n) {
    if (n % 2 == 0) {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2; // average of two middle elements
    } else {
        return arr[n / 2]; // middle element
    }
}

int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    cout << "Enter the element to search: ";
    cin >> key; 
    int result = linearSearch(arr, n, key); 
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
        cout << "Element not found" << endl;
    }
    delete[] arr;
    cout << "Middle element: " << findMiddle(arr, n) << endl; // find middle element
    return 0;
}

/* i want algortihm to be in c++ and i want to use linear search algorithm to find the middle element of an array.
start intput n no of elements in array
start input array of n elements
start input key element to be searched in array
loop i from 0 to n-1
    if arr[i] == key then return i
end loop
return -1
end function linearSearch
start function findMiddle
int arr[], int n)
if n is even then return (arr[n/2-1] + arr[n/2])/2
else return arr[n/2]
end function findMiddle
*/