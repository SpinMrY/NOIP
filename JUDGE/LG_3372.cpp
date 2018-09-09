#include <iostream>
#include <cstdio>
using namespace std;
//define
const int maxn=100005;
long long a[maxn],sum[maxn<<2],tag[maxn<<2];
int n,t;
void build(int rt,int l,int r){
    if(l==r){
        sum[rt]=a[l];
        return ;
    }
    int mid=(l+r)>>1;
    build(rt<<1,l,mid);
    build(rt<<1|1,mid+1,r);
    sum[rt]=sum[rt<<1]+sum[rt<<1|1];
}

void pushdown(int rt,int l,int r){
    int mid=(l+r)>>1;
    if(tag[rt]){
        tag[rt<<1]=tag[rt<<1|1]=tag[rt];
        sum[rt<<1]+=tag[rt<<1]*(mid-l+1);
        sum[rt<<1|1]+=tag[rt<<1|1]*(r-mid);
        tag[rt]=0;
    }
}

void update(int ql,int qr,long long c,int l,int r,int rt){
    if(){
        tag[rt]=c;sum[rt]+=tag[rt]*(r-l+1);
        return ;
    }
    pushdown(rt,l,r);
    int mid=(r+l)>>1;
    if(ql<=mid)update(ql,qr,c,l,mid,rt<<1);
    if(qr>mid)update(ql,qr,c,mid+1,r,rt<<1|1);
    sum[rt]=sum[rt<<1]+sum[rt<<1|1];
}

long long query(int ql,int qr,int l,int r,int rt){
    if(l==r){return sum[rt];}
    int mid=(l+r)>>1,res=0;
    if(ql<=mid)res+=query(ql,qr,l,mid,rt<<1);
    if(qr>mid)res+=query(ql,qr,mid+1,r,rt<<1|1);
    return res;
}

//main
int main(){
    //ios::sync_with_stdio(false);
    scanf("%d %d",&n,&t);
    for(int i=1;i<=n;i++){
        long long aa=0;scanf("%ld",&aa);
        a[i]=aa;
    }
    int cmd,x,y;
    long long k;
    build(1,1,n);
    while(t--){
        scanf("%d",&cmd);
        if(cmd==1){
            scanf("%d %d %ld",&x,&y,&k);
            update(x,y,k,1,n,1);
        }
        else if(cmd==2){
            scanf("%d %d",&x,&y);
            long long res=query(x,y,1,n,1);
            printf("%ld\n",res);
        }

    }
    return 0;
}        
