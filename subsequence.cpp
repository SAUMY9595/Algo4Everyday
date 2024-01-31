// recursuion subsequence

#include<iostream>
using namespace std;
int subsequence(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return 1;
	}
	int count=0;
	count+=subsequence(str.substr(1),ans+str[0]);
	count+=subsequence(str.substr(1),ans);
	return count;
	
}
int permutation(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return 1;
	}
	int count =0;
	for(int i=0;i<str.length();i++){
	     char ch=str[i];
	string ros= str.substr(0,i)+ str.substr(i+1);
	count+=permutation(ros,ans+ch);
}
return count;	
}
// permution of coins achieving a target
int coinChangePerm(vector<int>&coins,int tar,string ans){
	if(tar==0){
		cout<<ans<<endl;
		return 1;
	}
	int count =0;
	for(int i=0;i<coins.size();i++){
		if(tar-coins[i]>=0){
			count+=coinChangePerm(coinss,tar-coins[i],ans+to_string(coins[i]));
			
		}
	}
	return count;
}
int main(){
	//cout<<subsequence("abc","")<<endl;
	//cout<<permutation("abc","");
	vector<int>coinss={2,3,5,7};
	cout<<coinChangePerm(coins,10,"");
	return 0;
	
}
// all the permution of string  abc



