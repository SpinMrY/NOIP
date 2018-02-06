#include <bits/stdc++.h>
using namespace std;
//define
int a[1005],f[1005],g[1005],n,ans;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i],f[i]=1,g[i]=1;
    for(int i=1;i<=n;i++)
        for(int j=i-1;j>=1;j--)
            if(a[i]>a[j]) f[i]=max(f[i],f[j]+1);
    for(int i=n;i>=1;i--)
        for(int j=i+1;j<=n;j++)
            if(a[i]>a[j]) g[i]=max(g[i],g[j]+1);
    for(int i=1;i<=n;i++)
        if(g[i]+f[i]-1>ans)
           ans=g[i]+f[i]-1;
    cout<<n-ans<<endl;
    return 0;
}
