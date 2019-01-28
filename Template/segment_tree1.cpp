#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

//define
const int maxn=1e5+5;
typedef long long ll;
ll a[maxn],sum[maxn<<2],addv[maxn<<2];
int n,m;

void pushup(int rt){sum[rt]=sum[rt<<1]+sum[rt<<1|1];return ;}

void pushdown(int rt,int m){
    if(addv[rt]){
        addv[rt<<1]+=addv[rt];addv[rt<<1|1]+=addv[rt];
        sum[rt<<1]+=addv[rt]*(m-(m>>1));sum[rt<<1|1]+=addv[rt]*(m>>1);
        addv[rt]=0;
    }return ;
}

void build(int rt,int l,int r){
    addv[rt]=0;
    if(l==r){sum[rt]=a[l];return ;}
    int mid=l+r>>1;
    build(rt<<1,l,mid);
    build(rt<<1|1,mid+1,r);
    pushup(rt);
}

void modify(int rt,int l,int r,int ll,int rr,int w){
    if(ll<=l&&r<=rr){addv[rt]+=w;sum[rt]+=w*(r-l+1);return ;}
    int mid=l+r>>1;
    pushdown(rt,r-l+1);
    if(ll<=mid)modify(rt<<1,l,mid,ll,rr,w);
    if(rr>mid)modify(rt<<1|1,mid+1,r,ll,rr,w);
    pushup(rt);
}

ll query(int rt,int l,int r,int ll,int rr){
    if(ll<=l&&r<=rr){return sum[rt];}
    int ans=0,mid=l+r>>1;
    pushdown(rt,r-l+1);
    if(ll<=mid)ans+=query(rt<<1,l,mid,ll,rr);
    if(rr>mid)ans+=query(rt<<1|1,mid+1,r,ll,rr);
    return ans;
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(register int i=1;i<=n;++i)cin>>a[i];
    build(1,1,n);
    while(m--){
        int c,x,y,z;
        cin>>c;
        if(c==1){
            cin>>x>>y>>z;modify(1,1,n,x,y,z);
        }
        if(c==2){
            cin>>x>>y;
            cout<<query(1,1,n,x,y)<<endl;
        }
    }
    return 0;
}
