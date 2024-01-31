//bubble sort
/*

#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>&arr, int n){
	for(int i=0;i<n;i++){
		//for processing 0 to n-1
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	bubbleSort(arr,n);
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
*/
#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &arr,int n){
	//int n=arr.size();
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	bubbleSort(arr,n);
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
