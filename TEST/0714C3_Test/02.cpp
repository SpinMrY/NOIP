#include <bits/stdc++.h>
#define ll long long 
using namespace std;
//define
int vis[1000005],N,ans;
//function
void dfs(int k){
	if(k>N){ans++;return;}
	for(int i=1;i<=N;i++){
		if(vis[i]==0&&i!=k){
			vis[i]=1;
			dfs(k+1);
			vis[i]=0;
		}
	}
}
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>N;
	dfs(1);
	cout<<ans<<endl;
	return 0;
}
