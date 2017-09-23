#include<iostream>
using namespace std;
#define N 10100
#define INF 1<<30
int n,p;
long long int ans=INF;
long long int a[N],dict[N],sum[N];
void input(){
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        scanf("%lld%lld",&sum[i],&a[i]);
        dict[i]=dict[i-1]+a[i-1];
    }
}
int qiu(int i,int k){
    int ans1;
    if(i<k) ans1=(dict[k]-dict[i])*sum[i];
    else ans1=(dict[i]-dict[k])*sum[i];
    int ans2;
    if(i>k)
    ans2=(dict[n]-dict[i]+a[n]+dict[k])*sum[i];
    else ans2=(dict[n]-dict[k]+a[n]+dict[i])*sum[i];
    //cout<<"qiu"<<i<<" "<<k<<" "<<ans1<<" "<<ans2<<" "<<min(ans1,ans2)<<endl;
    return min(ans1,ans2);
}
void chuli(int k){
    long long MAX=0;
    for(int i=1;i<=n;++i){
        if(i==k) continue;
        MAX+=qiu(i,k);
    }
    if(ans>MAX){
        ans=MAX;
        p=k;
    }
    //cout<<MAX<<endl;
}
int main(){
    input();
    for(int i=1;i<=n;++i){chuli(i);}
    cout<<(p-1)<<","<<ans<<endl;
    return 0;
}
