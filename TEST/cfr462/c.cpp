#include <iostream>  
#include <string.h>  
#include <cstdio>  
using namespace std;  
int main(){  
    int dp[10010];  
    int dps[10010];  
    int n=0;  
    int num[10010];  
    int x;  
    while(cin>>x)  
        num[++n]=x;  
    for(int i=1;i<=n;i++)  
        dp[i]=dps[i]=1;  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<i;j++){  
            if(num[i]<=num[j])  
            dp[i]=max(dp[i],dp[j]+1);  
            if(num[i]>num[j])  
            dps[i]=max(dps[i],dps[j]+1);  
        }  
    }  
      
    int ans1=0,ans2=0;  
    for(int i=1;i<=n;i++){  
        ans1=max(ans1,dp[i]);  
        ans2=max(ans2,dps[i]);  
    }  
      
     cout<<ans1<<endl;  
     cout<<ans2<<endl;  
    return 0;  
}  
