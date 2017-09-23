#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
long long l,r,mid;
long long zuo,you,sum,ans,R,n;
struct node{
    long long x,y,xx,h;
    long long s;
}ta[10010];
long long love(long mid){
    int i;
    long long s1,s2;
    s1=0;s2=0;
    for (i=0;i<=n;i++){
        if (ta[i].xx<=mid) s1+=ta[i].s;
        else if (ta[i].x>=mid) s2+=ta[i].s;
        else 
        {
            s1+=(mid-ta[i].x)*ta[i].h;
            s2+=(ta[i].xx-mid)*ta[i].h;
        }
    }
    return s1-s2;
}
int main(){
    long long  x,y,w,h,i;
    long long ans,maxx=-1;
    scanf("%lld",&R);
    scanf("%lld",&n);
    for (i=1;i<=n;i++){
        scanf("%lld%lld%lld%lld",&x,&y,&w,&h); 
        ta[i].x=x;ta[i].y=y;ta[i].xx=x+w;ta[i].h=h;ta[i].s=w*h;
        if (x+w>maxx) maxx=x+w;
    }
    l=0;r=R;
    while (l+1<r){
        mid=(l+r)/2;
        sum=love(mid);
        if (sum>0) r=mid;
        else if (sum<=0) l=mid;
        else if (sum==0) {printf("%d",mid);return 0;}
    }
    zuo=love(l);
    you=love(r);
    if (abs(zuo)>=abs(you)) ans=r;
    else ans=l;
    if (ans==maxx) ans=R;
    printf("%lld",ans);
} 
