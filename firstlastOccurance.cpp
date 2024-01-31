/*
#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> &arr, int size, int key) {
    int si = 0;
    int ei = size - 1;
    int ans = -1;
    while (si <= ei) {
        int mid = si + (ei - si) / 2;
        if (key == arr[mid]) {
            ans = mid;
            ei = mid - 1;
        } else if (key > arr[mid]) {
            si = mid + 1;
        } else {
            ei = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(vector<int> &arr, int size, int key) {
    int si = 0;
    int ei = size - 1;
    int ans = -1;
    while (si <= ei) {
        int mid = si + (ei - si) / 2;
        if (key == arr[mid]) {
            ans = mid;
            si = mid + 1;
        } else if (key > arr[mid]) {
            si = mid + 1;
        } else {
            ei = mid - 1;
        }
    }
    return ans;
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
    int key;
    cout << "Enter the value of the key: ";
    cin >> key;
    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);
    cout << "The first occurrence of the key is at index: " << first << endl;
    cout << "The last occurrence of the key is at index: " << last << endl;
    cout<<"totatl number of ocuurance"<<(last-first+1)<<endl;

    return 0;
}
*/
#include<iostream>
#include<vector>
using namespace std;
int firstO(vector<int> &arr,int size,int k){
	int si=0;
	int ei=size-1;
	int ans=-1;
	while(si<=ei){
		int mid=si+(ei-si)/2;
		if(arr[mid]==k){
			ans=mid;
			ei=mid-1;
		}else if(k>arr[mid]){
			si=mid+1;
		}else{
			ei=mid-1;
		}
	}return ans;
}
int main() {
    vector<int>arr = {1, 2, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4};
    cout << "first index of arr: " << firstO(arr, 12, 2);
    return 0;
}


