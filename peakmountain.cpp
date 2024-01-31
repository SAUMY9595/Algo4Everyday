#include <iostream>
#include <vector>
using namespace std;

int peakIndex(vector<int> &arr) {
    int si = 0;
    int ei = arr.size() - 1;
    while (si <= ei) {
        int mid = si + (ei - si) / 2;
        if (arr[mid] < arr[mid + 1]) {
            si = mid + 1;
        } else {
            ei = mid;
        }
    }
    return si;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int peak = peakIndex(arr);
    cout << "The peak index in the mountain array is: " << peak << endl;
    return 0;
}

