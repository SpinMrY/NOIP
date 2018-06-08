#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
long long n,a[800005],s[800005],sum[800005];
long long ans,top;
//function
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=n;i>=1;i--)
    {
        while(top&&a[i]>a[s[top]]) sum[i]+=sum[s[top--]]+1;
        s[++top]=i;
    }
    for(int i=1;i<=n;i++) ans+=sum[i];
    cout<<ans<<endl;
    return 0;
}
