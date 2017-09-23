
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int n,m,a[1005],k[1005],dp[5005],ans;
int main(){
    memset(dp,-1,sizeof(dp)); dp[0]=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++) scanf("%d%d",&a[i],&k[i]);
    for(int i=1;i<=m;i++)
        for(int j=n;j>=a[i];j--)
            dp[j]=max(dp[j],dp[j-a[i]]>=0?dp[j-a[i]]+k[i]:0),ans=max(ans,dp[j]);
    printf("%d\n",ans);
    return 0;
}
