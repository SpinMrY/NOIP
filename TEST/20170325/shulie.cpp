/*
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int k,n;
int ans,count;
int shulie[100000000];
int main(){
	ans=1;count=1;
	shulie[0]=1;shulie[1]=1;
	ios::sync_with_stdio(false);
	cin>>k>>n;
	//if(n==1){cout<<1<<endl;return 0;}
	while(1){
		ans*=k;
		int nr=count;
		for(int i=0;i<=nr;i++){
			shulie[++count]=shulie[i]+ans;
			if(count>=n&&n!=1){
				cout<<shulie[n]-1<<endl;
				return 0;
			}
			else if(count>n&&n==1){
				cout<<1<<endl;
				return 0;
			}
		}
	}
	cout<<shulie[0]<<endl<<shulie[1]<<endl;
	return 0;
}
*/
#include <iostream>
#include <cstdio>
using namespace std;
int n,k,ans,K=1;
int main(){
	ios::sync_with_stdio;
	cin>>k>>n;
	while(n!=0){
		ans+=n%2*K;
		n/=2;
		K=k*K;
	}
	cout<<ans<<endl;
	return 0;
}
