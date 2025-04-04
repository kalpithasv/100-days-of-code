#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = max(arr[0], arr[1]);
    int secondLargest = min(arr[0], arr[1]);

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element: " << secondLargest << endl;
    return 0;
}
