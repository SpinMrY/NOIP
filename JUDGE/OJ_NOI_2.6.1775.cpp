#include <iostream>
#include <cstdio>
using namespace std;
//var 
int n,m,f[1001]{},c[1001],w[1001],x,y,z;
//fun
void solve(){
	for(x=1;x<=n;x++){
		for(y=m;y>=w[x];y--){
			if(f[y]<f[y-w[x]]+c[x])f[y]=f[y-w[x]]+c[x];
		}
	}
}
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>m>>n;
	for(x=1;x<=n;x++){
		cin>>w[x]>>c[x];
	}
	solve();
	cout<<f[m]<<endl;
	return 0;
}
