#include <bits/stdc++.h>
#define ll long long 
using namespace std;
//define
ll p,q,r,ans;
//function 
ll work(ll n,int k){
	ll temp=0,ans=0,flag=0;
	while(n!=0){
		temp=n%10;
		if(temp>=k){return -1;}
		ans=ans+temp*pow(k,flag);
		n/=10;flag++;
	}return ans;
}
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>p>>q>>r;
	//cout<<work(p,13)<<endl;
	//cout<<work(r,13)<<endl;
	int t1,t2,t3;
	for(int i=2;i<=16;i++){
		t1=work(p,i);t2=work(q,i);t3=work(r,i);
		if(t1*t2==t3 && t1!=-1 && t2!=-1 && t3!=-1){
			ans=i;break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
