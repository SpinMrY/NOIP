#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int n,m,Q;
int head[100005],p;
struct edge{int to,next,w;}e[200005];
void addedge(int u,int v,int w)
{
    e[++p].to=v;e[p].w=w;e[p].next=head[u];head[u]=p;
    e[++p].to=u;e[p].w=w;e[p].next=head[v];head[v]=p;
}
int d[100005],anc[100005][20],dis[100005];
void dfs(int u,int fa)
{
    for(int i=head[u];i;i=e[i].next)
    {
        int v=e[i].to,w=e[i].w;if(v==fa)continue;
        d[v]=d[u]+1;anc[v][0]=u;dis[v]=dis[u]+w;dfs(v,u);
    }
}
void init()
{
    for(int j=1;j<=18;j++)
    for(int i=1;i<=n;i++)anc[i][j]=anc[anc[i][j-1]][j-1];
}
int LCA(int u,int v)
{
    if(d[u]<d[v])swap(u,v);
    for(int i=18;i>=0;i--)if(d[anc[u][i]]>=d[v])u=anc[u][i];
    if(u==v)return u;
    for(int i=18;i>=0;i--)if(anc[u][i]!=anc[v][i])u=anc[u][i],v=anc[v][i];
    return anc[u][0];
}
int main()
{
    freopen("dquery.in","r",stdin);freopen("dquery.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        int u,v,w;scanf("%d%d%d",&u,&v,&w);
        char s[2];scanf("%s",s);
        addedge(u,v,w);
    }
    d[1]=1;dfs(1,0);init();
    scanf("%d",&Q);
    while(Q--)
    {
        int u,v;scanf("%d%d",&u,&v);
        printf("%d\n",dis[u]+dis[v]-2*dis[LCA(u,v)]);
    }
    return 0;
}
