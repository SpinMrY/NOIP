#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

//define
const int maxn=1e5+5;
int f1[maxn],ans,mmax,a[maxn],n;

//main
int main(){
    //ios::sync_with_stdio(false);
    //for(int i=1;i<=n;i++)cin>>a[i];
    while(~scanf("%d",&a[++n]));n--;
    f1[1]=1;ans=0;
    for(int i=2;i<=n;i++){
        mmax=0;
        for(int j=1;j<i;j++){
            if(mmax<f1[j]&&a[j]>a[i])mmax=f1[j];
        }f1[i]=mmax+1;
        ans=max(ans,f1[i]);
    }
    cout<<ans<<endl;
    memset(f1,0,sizeof(f1));
    f1[1]=1;ans=0;
    for(int i=2;i<=n;i++){
        mmax=0;
        for(int j=1;j<i;j++){
            if(mmax<f1[j]&&a[j]<a[i])mmax=f1[j];
        }f1[i]=mmax+1;
        ans=max(ans,f1[i]);
    }
    cout<<ans<<endl;
    return 0;
}
