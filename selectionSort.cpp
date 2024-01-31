//slection sort
/*
#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&arr, int n){
	for(int i=0;i<n-1;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minIndex])
			minIndex=j;
		}
		swap(arr[minIndex],arr[i]);
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	selectionSort(arr,n);
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
*/
#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> &arr,int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}swap(arr[min],arr[i]);
	}
}
//bubble sort
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
	cout<<" selection sort"<<endl;
	selectionSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<" bubble sort"<<endl;
		bubbleSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
