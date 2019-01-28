#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

//define
const int maxn=1e2+5;
int a[maxn],f[maxn],g[maxn],ans,n;

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;for(int i=1;i<=n;i++)cin>>a[i];
    f[1]=1;g[n]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            if(a[j]<a[i])f[i]=max(f[i],f[j]+1);
        }
    }
    for(int i=n-1;i>0;i--){
        for(int j=n;j>i;j--){
            if(a[j]<a[i])g[i]=max(g[j]+1,g[i]);
        }
    }
    for(int k=1;k<=n;k++){
        ans=max(ans,g[k]+f[k]-1);
    }
    cout<<n-ans<<endl;
    return 0;
}
