#include <bits/stdc++.h>
using namespace std;
//define
int n,m,a,ans;
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>m;
	while(a<=1000000){
		a++;
		if(n%a==0 && n%(m-a)==0){
			ans=a;
			break;
		}
	}
	if(a>=1000000)ans=-1;
	cout<<a<<endl;
	return 0;
}
