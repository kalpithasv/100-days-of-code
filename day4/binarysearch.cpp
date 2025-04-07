// binary search algorithm
// start low = 0, high = n-1
// loop while low <= high
//     mid = (low + high) / 2
//     if arr[mid] == key then return mid
//     else if arr[mid] < key then low = mid + 1
//     else high = mid - 1
// end loop
// return -1
// end function binarySearch
// start function main
// start input n no of elements in array
// start input array of n elements
// start input key element to be searched in array
// call binarySearch function and store result in result variable
// if result != -1 then print "Element found at index: " + result
// else print "Element not found"
// end function main
// end pseudocode
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid; 
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1; 
        }
    }
    return -1; 
}
int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter the elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    cout << "Enter the element to search: ";
    cin >> key; 
    int result = binarySearch(arr, n, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl; 
    } else {
        cout << "Element not found" << endl;
    }
    delete[] arr; 
    return 0;
}

