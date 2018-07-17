// luogu-judger-enable-o2
#include <iostream>
#include <cstdio>
using namespace std;

//define
const int maxn=4e5+4;
int ans[maxn],fa[maxn],h[maxn],head[maxn],tot,e,n,k,m;
bool broken[maxn];
struct Graph{
    int u,v,next;
}g[maxn];

int find(int x){
    if(x!=fa[x]){
        fa[x]=find(fa[x]);
    }
    return fa[x];
}

void addedge(int u,int v){
    g[++e].u=u;g[e].v=v;
    g[e].next=head[u];
    head[u]=e;
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    int u,v;
    for(int i=1;i<=n;i++){
        fa[i]=i;
    }
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        addedge(u,v);
        addedge(v,u);
    }
    cin>>k;
    tot=n-k;
    for(int i=1;i<=k;i++){
        cin>>h[i];
        broken[h[i]]=true;
    }

    for(int i=1;i<=2*m;i++){
        if(broken[g[i].u]==false&&broken[g[i].v]==false&&find(g[i].u)!=find(g[i].v)){
            fa[find(g[i].u)]=fa[find(g[i].v)];
            tot--;
        }
    }
    ans[k+1]=tot;
    for(int i=k;i>=1;i--){
        int eu=h[i];tot++;
        broken[eu]=false;
        for(int j=head[eu];j!=0;j=g[j].next){
            if(broken[g[j].v]==false&&fa[find(eu)]!=fa[find(g[j].v)]){
                tot--;
                fa[find(g[j].v)]=fa[find(eu)];
            }
        }
        ans[i]=tot;
    }

    for(int i=1;i<=k+1;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
