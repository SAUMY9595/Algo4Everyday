//count digits
/*
#include<iostream>
using namespace std;
int countDigit(int n){
	int count=0;
	while(n!=0){
		count++;
		n=n/10;
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	cout<<countDigit(n)<<endl;
	
}
*/
/*
//reverse thge number
#include<iostream>
using namespace std;
int reverse(int n){
	int rem=0;
	while(n!=0){
	int digit=n%10;
	rem=rem*10+digit;
	n=n/10;
	}
	 return rem;
}
int main(){
	int n;
	cin>>n;
	cout<<reverse(n)<<endl;
}
*/
/*
#include<iostream>
using namespace std;
int printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int Max(int arr[],int size){
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		
			}
			return max;
}
int Min(int arr[],int size){
	int min=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		
			}
			return min;
}
int main(){
	int n;
	cin>>n;
	int arr[50];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	printArray(arr,n);
	cout<<endl;
	cout<<"maximum number is"<< Max(arr,n)<<endl;
	cout<<"minimum number is"<< Min(arr,n)<<endl;
	
}
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> arr={1,3,4,5};
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}return 0;
}
