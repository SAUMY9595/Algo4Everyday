#include <iostream>
#include <vector>
using namespace std;

int isSorted(int n, vector<int>& a) {
    for (int i = 1; i < a.size(); i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
	int a[5];
     int a={1, 2, 3, 4, 5};
    cout << isSorted(a,5);
    return 0;
}
