#include<iostream>
using namespace std;
/*
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		cout<<i<<" "<<endl;
		i=i+1;
	}
	return 0;
}
*/

int main(){
	int n;
	cin>>n;
	int i=0;
	int sum=0;
	while(i<=n){
		sum=sum+i;
		i=i+2;
	}
	cout<<sum<<endl;
	return 0;
}
/*
// sum of even numbers
int main(){
	int n;
	cin>>n;
	int i=1;
	int sum=0;
	while(i<=n){
	
	
	if(i%2==0){
		sum=sum+i;
		
	}i++;
}
	cout<<sum<<endl;
	return 0;
	
	}
*/
