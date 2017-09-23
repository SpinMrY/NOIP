#include<cstdio>
#include<iostream>
using namespace std;
#define N 1005
int n,ans;int a[N],f1[N],f2[N];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){scanf("%d",&a[i]);f1[i]=f2[i]=1;}
    for(int i=1;i<=n;i++)
        for(int j=1;j<i;j++)
            if(a[i]>a[j]) f1[i]=max(f1[i],f1[j]+1);
    for(int i=n;i>0;i--)
        for(int j=n;j>i;j--)
            if(a[i]>a[j]) f2[i]=max(f2[i],f2[j]+1);
    for(int i=1;i<=n;i++)
        ans=max(f1[i]+f2[i]-1,ans);
    printf("%d",ans);
    return 0;
}

