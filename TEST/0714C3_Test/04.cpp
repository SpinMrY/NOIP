#include <bits/stdc++.h>
#define ll long long
using namespace std;
//define
const int mod=1000000007;
//function
int dfs(int x,int y){
	if(x<y||y==0)return 0;
	else if(y==1||x==y)return 1;
	else return dfs(x-1,y-1)+y*dfs(x-1,y);
}
//main
int main(){
	int i,j,m,n,k,t;
	ios::sync_with_stdio(false);
	cin>>n>>m;
	cout<<dfs(n,m)<<endl;
	return 0;
}
