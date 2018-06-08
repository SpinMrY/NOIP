#include <iostream>
#include <cstdio>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int ll,rr,n,a[100001],lef[100001],stack[100001],top;
long long sum[100001];
//function
//main
int main(){
    long long ans=-1,tmp;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",a+i);
        sum[i]=sum[i-1]+a[i];
    }
    a[++n]=-1;top=0;
    for(int i=1;i<=n;i++){
        if(top==0||a[i]>a[stack[top-1]]){
            stack[top++]=i;
            lef[i]=i;
            continue;
        }
        if(a[i]==a[stack[top-1]])continue;
        while(top>=1&&a[i]<a[stack[top-1]]){
            --top;
            tmp=(1LL*a[stack[top]]*(sum[i-1]-sum[lef[stack[top]]-1]));
            if(tmp>ans){
                ll=lef[stack[top]];
                rr=i-1;
                ans=tmp;
            }
        }
        lef[i]=lef[stack[top]];
        stack[top++]=i;
    }
    printf("%lld\n%d %d\n",ans,ll,rr);  
    return 0;
}
