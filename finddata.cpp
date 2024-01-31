//find data
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
    int arr[5]={1,2,3,4,5};

	cout<<findData(data,arr)<<endl;
	return 0;
}
