#include<iostream>
using namespace std;

int fact(int n){
	int fat=1;
	for(int i=1;i<=n;i++){
		fat=fat*i;
	}
	return fat;
	
}
int ncr(int n,int r){
	int num=fact(n);
	int deno=fact(r)*fact(n-r);
	return num/deno;
}
int main(){
	int n,r;
	cin>>n>>r;
	int ans=ncr(n,r);
	cout<<ans<<endl;
	return 0;
	
}
