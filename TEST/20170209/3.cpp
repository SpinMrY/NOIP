#include <iostream>
#include <cstdio>
using namespace std;
int dp[101][251];
int main(){
	int i,n,m,j;
	ios::sync_with_stdio(false);
	cin>>n>>m;
	dp[0][0]=1;
	for(i=1;i<=m;i++){
		for(j=i;j<=n;j++){
			dp[i][j]=dp[i][j-i]+dp[i-1][j-1];
		}
	}
	cout<<dp[m][n]<<endl;
	return 0;
}
