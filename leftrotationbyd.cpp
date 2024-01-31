// 6 left rotate by d places
#include<iostream>
using namespace std;
void Reverse(int arr[],int start,int end){
	while(start<=end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void LeftrotatebyD(int arr[],int n,int d){
	d=d%n;
	int temp[d];
	for(int i=0;i<0;i++){
		temp[i]=arr[i];
	}
	for(int i=d;i<n;i++){
		arr[i-d]=arr[i];
	}
	for(int i=n-d;i<n;i++){
		arr[i]=temp[i-(n-d)];
	}
}
int main(){
	
}
