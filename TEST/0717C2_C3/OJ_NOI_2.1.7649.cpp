#include <bits/stdc++.h>
#define ll long long 
using namespace std;
//define
ll ans,n;
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>n;int tmp;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if((1+i)*i==2*n+4*j){
				cout<<j<<" "<<i<<endl;
				return 0;
			}
		}
	}
	return 0;
}
