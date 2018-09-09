// luogu-judger-enable-o2
// luogu-judger-enable-o2
#include <iostream>
#include <queue>
using namespace std;
//define
const int maxn=200005;
const int inf=2147483647;

int n,m,head[maxn],tot=0,dis[maxn],vis[maxn];
struct graph{
    int v,w,next;
}g[500005];

inline void addedge(int u,int v,int w){
        g[++tot]={v,w,head[u]};
        head[u]=tot;
}

struct node {
    int u,d;
    bool operator <(const node& rhs) const {
        return d>rhs.d;
    }
};

inline void Dijkstra(int s) {
    for (int i=1;i<=n;i++) dis[i]=inf;
    dis[s]=0;
    priority_queue<node> Q;
    Q.push((node){s,0});
    while (!Q.empty()) {
        node nd=Q.top(); Q.pop();
        int u=nd.u,d=nd.d;
        if (vis[u]) continue;
        vis[u]=1;
				for (int i=head[u];i;i=g[i].next) {
            int v=g[i].v,w=g[i].w;
            if (dis[u]+w<dis[v]) {
                dis[v]=dis[u]+w;
                Q.push((node){v,dis[v]});
            }
        }
    }
}

//main
int main(){
        ios::sync_with_stdio(false);
        int st=0;
        cin>>n>>m>>st;
        for(int i=1;i<=m;i++){
                int u,v,w;cin>>u>>v>>w;
                addedge(u,v,w);
        }
        Dijkstra(st);
        for(int i=1;i<=n;i++){
                //if(st!=i){
                cout<<dis[i]<<' ';
                //}	
        }
        return 0;
}
