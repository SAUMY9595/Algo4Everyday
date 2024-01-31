#include<iostream>
using namespace std;
int power(int a,int x){
    if(a==0){
        return 0;
    }
    if(x==0){
        return 1;
    }
    return a*power(a,x-1);
}
int main(){
    int a,x;
    cin>>a>>x;
    cout<<power(a,x);
    return 0;

}