//insertion sort
/*
#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &arr,int n){
	for(int i=1;i<n;i++){
		int temp=arr[i];
		int j=i-1;
		for(;j>=0;j--){
			if(arr[j]>temp){
				//shift
				arr[j+1]=arr[j];
			}
			else{// ruk jao
			break;
			}
		}
		arr[j+1]=temp;
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	insertionSort(arr,n);
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	insertionSort(arr,n);
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
