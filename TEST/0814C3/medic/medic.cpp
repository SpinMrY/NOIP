#include<iostream>
#include<cstdio>
using namespace std;
//define
int v,n,nn[105],dp[105][100050],w[105];
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("medic.in","r",stdin);freopen("medin.out","w",stdout);
    scanf("%d%d",&v,&n);
    for(int i=1;i<=n;++i)scanf("%d%d",&nn[i],&w[i]);
    for(int i=1;i<=n;++i){
        for(int j=1;j<=v;++j){
            dp[i][j]=dp[i-1][j];
            if(j>=nn[i])
                dp[i][j]=dp[i-1][j-nn[i]]+w[i]>dp[i-1][j]?dp[i-1][j-nn[i]]+w[i]:dp[i-1][j];
        }
    }
    printf("%d",dp[n][v]);
    return 0;
}
