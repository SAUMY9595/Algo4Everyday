#include<iostream>
using namespace std;
int largestnumber(int arr[],int n)
{
	int largest=arr[0];
	for(int i=1;i<n;i++){
		if (arr[i]>largest){
			largest=arr[i];
		}
	}
	return largest;
}
int main(){
	
	int arr[5]={1,2,5,4,6};
	int largest=largestnumber(arr,5);
	cout<<largest;
	return 0;
}
