#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

//define
const int maxn=2000000+5;
int n,m,tree[maxn<<2];

void build(){
    for(int i=n;i;--i)
        tree[i]=min(tree[i<<1],tree[i<<1|1]);
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;++i)cin>>tree[n+i];
    tree[2*n+1]=0x7f7f7f7f;
    build();cout<<'0'<<endl;
    for(int i=2;i<=n;++i){
        int l=max(n,i-m-1+n),r=i+n;
            int ans=0x7f7f7f7f;
            while(l^r^1){
                if(~l&1) ans=min(tree[l^1],ans);
                if(r&1) ans=min(tree[r^1],ans);
                l>>=1,r>>=1;
            }
            cout<<ans<<endl;
    }
    return 0;
}
