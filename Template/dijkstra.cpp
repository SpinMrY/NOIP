#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

//define
const int maxn=2e5+5;
const int inf=0x7f7f7f7f;

int n,m,st,head[maxn],dis[maxn],tot;
struct graph{
    int v,w,next;
}e[maxn];
struct node{
    int u,d;
    bool operator < (const node& a) const{
        return d>a.d;
    }
};

inline void addedge(int u,int v,int w){
    e[++tot]={v,w,head[u]};
    head[u]=tot;
}

inline void dijkstra(int s){
    for(register int i=1;i<=n;++i)dis[i]=inf;
    dis[s]=0;priority_queue<node>q;
    q.push((node){s,0});
    while(!q.empty()){
        node nd=q.top();q.pop();
        int u=nd.u;int d=nd.d;
        if(d!=dis[u])continue;
        for(int i=head[u];i;i=e[i].next){
            int v=e[i].v,w=e[i].w;
            if(dis[u]+w<dis[v]){dis[v]=dis[u]+w;q.push((node){v,dis[v]});
            }
        }
    }
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m>>st;
    for(register int i=1;i<=m;++i){int x,y,z;cin>>x>>y>>z;addedge(x,y,z);}
    dijkstra(st);
    for(register int i=1;i<=n;++i){cout<<dis[i]<<' ';}
    return 0;
}
