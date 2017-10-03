#include <bits/stdc++.h>
using namespace std;
const int N=10000001;
const int inf=0x7f7f7f7f;

int f[N],size[N],n,head[N],tot;
int rt,sum;
struct edge{
    int u,v,next;
}G[N<<1];
inline void addedge(int u,int v){
    G[++tot].u=u;
    G[tot].v=v;
    g[tot].next=head[u];
    head[u]=tot;
    G[++tot].u=v;
    G[tot].v=u;
    g[tot].next=head[v];
    head[v]=tot;
}

inline void getrt(int u,int fa){
    size[u]=1;f[u]=0;
    for(int i=head[u];i;i=G[i].next){
        int v=G[i].v;
        if(v==fa)continue;
        getrt(v,u);
        size[u]+=size[v];
        f[u]=max(f[u],size[v]);
    }
    f[u]=max(f[u],sum-size[u]);
    if(f[u]<f[rt])rt=u;
}

int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>u>>v;
        addedge(u,v);
    }

    rt=0,sum=n,f[0]=inf;
    getrt(1,0);
    return 0;
}
