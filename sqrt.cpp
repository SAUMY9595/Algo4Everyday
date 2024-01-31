#include <iostream>
using namespace std;

int binarySearch(int n) {
    int si = 0;
    int ei = n;
    int ans = -1;
    while (si <= ei) {
        int mid = si + (ei - si) / 2;
        long long sqr = (long long)mid * mid;  // Casting mid to a long long to avoid potential integer overflow
        if (sqr == n) {
            return mid;
        }
        else if (sqr > n) {
            ei = mid - 1;
        }
        else {
            ans = mid;
            si = mid + 1;
        }
    }
    return ans;
}

int sqrt(int x) {
    return binarySearch(x);
}
double morePrecision(int n,int precision,int tempSol){
	double factor=1;
	double ans=tempSol;
	for(int i=0;i<precision; i++){
		factor=factor/10;
		for(double j=ans;j*j<n;j=j+factor){
			ans=j;
		}
	}
	return ans;
	}
int main() {
    int n;
    cout<<"enter the number"<<endl;
    cin >> n;
    int tempSol=sqrt(n);
    cout << "answer"<<morePrecision(n,3,tempSol)<<endl;
    return 0;
}

