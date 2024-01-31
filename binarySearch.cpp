#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int size, int key) {
    int si = 0;
    int ei = size - 1;
    int mid = (si + ei) / 2;
    while (si <= ei) {
        if (key == arr[mid]) {
            return mid;
        }
        if (key > arr[mid]) {
            si = mid + 1;
        } else {
            ei = mid - 1;
        }
        mid = (si + ei) / 2;
    }
    return -1;
}

int main() {
    cout << "Enter the value of size of array: ";
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }
    cout << "The entered array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    int key;
    cout << "\nEnter the value of key: ";
    cin >> key;

    int ans = binarySearch(arr, n, key);
    if (ans != -1) {
        cout << "The index of the key value is: " << ans << endl;
    } else {
        cout << "The key value not found in the array." << endl;
    }
}

