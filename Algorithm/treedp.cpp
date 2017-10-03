#include<bits/stdc++.h>
#define N 10010
using namespace std;
struct Edge{
    int u,v,next,w;
}G[N*2];
int tot=0,head[4*N],dp1[N],dp2[N];
//dp1:最长链
//dp2:次长链 
void addedge(int u,int v,int w){
    G[++tot].u=u;G[tot].v=v;G[tot].w=w;G[tot].next=head[u];head[u]=tot;
    G[++tot].u=v;G[tot].v=u;G[tot].w=w;G[tot].next=head[v];head[v]=tot;
}
void read(int &x){
    x=0;int f=1;char ch;
    do{ch=getchar();if (ch=='-')f=-1;}while(ch<'0'||ch>'9');
    do{x=x*10+ch-'0';ch=getchar();}while(ch>='0'&&ch<='9');
    x*=f;
}
int ans=0;
void work(int u,int fa){
    for (int i=head[u];i;i=G[i].next){
        int v=G[i].v,w=G[i].w;
        if (v==fa)continue;
        work(v,u);
        if (dp1[v]+w>dp1[u]){
            dp2[u]=dp1[u];
            dp1[u]=dp1[v]+w;
        }
        else dp2[u]=max(dp2[u],dp1[v]+w);
    }
    ans=max(dp1[u]+dp2[u],ans);
}
int main(){
    int n;read(n);
    for (int i=1;i<n;i++){
        int u,v,w;read(u);read(v);read(w);
        addedge(u,v,w);
    }
    work(1,0);
    printf("%d\n",ans);
    return 0;
}
