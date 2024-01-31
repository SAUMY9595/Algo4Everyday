/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> arr(n,0);
	for(int i=0;i<arr.size();i++){
		cin>>arr[i];
	}
		for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
*/

#include<iostream>
#include<vector>
using namespace std;
bool findData(int data,vector<int>&arr){
	for(int i=0;i<arr.size();i++){
		if(arr[i]==data){
			return true;
		}
	}
	return false;
}
int main(){
	int data=4;
vector<int> arr={1,2,3,4,5};

	cout<<findData(data,arr)<<endl;
	return 0;
}
