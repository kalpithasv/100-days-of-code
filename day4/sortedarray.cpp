//sorted array
#include <iostream>
#include <vector>   // for using vector
#include <algorithm> // for using sort function
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n); 
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    sort(arr.begin(), arr.end());
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
    return 0;
}