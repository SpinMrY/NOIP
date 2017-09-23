#include <iostream>
#include <cmath>
using namespace std;
int a[10000],ans=0;
int n,k;
bool ss(int x){
	int b=sqrt(x);
	for(int i=2;i<=b;i++){
		if(x%i==0)return 0;
	}
	return 1;
}
void check(int t,int s,int l){
	if(t==k){if(ss(s)){ans++;}}
	else{
		for(int i=l;i<=n;i++){
			check(t+1,s+a[i],i+1);
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>k;	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	check(0,0,1);
	cout<<ans<<endl;
	return 0;
}
