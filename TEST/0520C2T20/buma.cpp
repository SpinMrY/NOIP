#include <iostream>
#include <cmath>
using namespace std;
int a[33];
//function
void _dec2bin(int _d){
	int b=_d;
	int j=1,temp=0;
	while(b){temp=b%2;a[j++]=temp;b/=2;temp=0;}
	return;
}
void _output(){
	for(int i=32;i>1;i--){if(a[i]==0)cout<<"1";else if(a[i]==1)cout<<"0";}
	if()
}
//main
int main(){
	ios::sync_with_stdio(false);
	int n=0;cin>>n;int flag=0,len=0;
	_dec2bin(abs(n));
	if(n>=0){flag=1;}
	else{flag==0;}
	if(flag==1){for(int i=32;i>=1;i--){cout<<a[i];}cout<<endl;}
	else if(flag==0){_output();cout<<endl;}
	return 0;
}
