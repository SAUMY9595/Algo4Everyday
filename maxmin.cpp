#include<iostream>
using namespace std;
int sum(int arr[],int size){
	int count=0;
	for(int i=0;i<=size;i++){
		count=count+arr[i];
	}
	return count;
}

int main(){
      int size;
	  cin>>size;
	  int num[100];	
	  for(int i=0;i<size;i++){
	  	cin>>num[i];
	  } 
	  int answer=sum(num, size);
	  cout<<answer<<endl;
}

