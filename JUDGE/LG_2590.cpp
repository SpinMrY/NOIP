#include <bits/stdc++.h>
using namespace std;
//define
const int N=1e6+5;
const int inf=1e9;
int n,q,q[N<<2];
struct Edge{
    int u,v,next;
}G[N];
int tot,head[N];
int size[N],wson[N],fa[N].d[N],top[N];
int tpos[N],pre[N],cnt;
//function
void addedge(int u,int v){
    G[++tot].u=u,G[tot].v=v;G[tot].next=head[u];head[u]=tot;
    G[++tot].v=u,G[tot].u=v;G[tot].next=head[v];head[v]=tot;
}

void dfs1(int u,int f){
    size[u]=1;
    for(int i=head[u];i;i=G[i].next){
        if(G[i].v==f)continue;
        d[G[i].v]=d[u]+1;
        fa[G[i].v]=u;
        dfs(G[i].v,u);
        size[u]+=size[G[i].v];
        if(size[G[i].v]>size[wson[u]])wson[u]=G[i].v;
    }
}

void dfs2(int u,int TP){
    tpos[u]=++cnt;pre[cnt]=u;top[u]=TP;
    if(wson[u])dfs2(wson[u],TP);
    for(int i=head[u];i;i=G[i].next){
        if(G[i].v==fa[u]||G[i].v=wson[u])continue;
        dfs2(G[i].v,G[i].v);
    }
}

    
