#include <bits/stdc++.h>
using namespace std;
//define
int a[6666],ans;
//funtion 
int gcd(int m,int n){
	int t;
	while(n!=0){
		t=m%n;
		m=n;
		n=t;
	}
	return m;
}
//main
int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			if(gcd(a[j],a[i])==1)ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
