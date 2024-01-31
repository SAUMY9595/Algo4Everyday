//linear search
/*
#include<iostream>
using namespace std;
bool search(int arr[],int size,int x){

	for(int i=0;i<=size;i++){
		if(arr[i]==x){
			return true;
	}
	}return false;
}
int main(){
	int n;
	cin>>n;
	int arr[10];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	bool found=search(arr,n,x);
	if (found){
		cout<<"element is present";
	}
	else{
		cout<<"elemnt is not present";
	}return 0;
}
*/
#include<iostream>
using namespace std;
void reverse(int arr[],int n){
	int start=0;
	int end=n-1;
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[6]={2,4,6,7,-8,6};
	reverse(arr,6);
	printArray(arr,6);
	
	
}
