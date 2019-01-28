#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

//define
const int maxn=2e5+5;
int nos,ans,n,m,head[maxn],tot,fa[maxn];
struct graph{
    int u,v,w;
}e[maxn];

int find(int x){return x==fa[x]?x:fa[x]=find(fa[x]);}

int cmp(graph x,graph y){return x.w<y.w;}

void kruskal(){
    nos=n;
    for(register int i=1;i<=m&&nos>1;++i){
        int fu=find(e[i].u),fv=find(e[i].v);
        if(fu!=fv){fa[fu]=fv;ans+=e[i].w;nos--;}
    }
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(register int i=1;i<=n;++i)fa[i]=i,cin>>e[i].u>>e[i].v>>e[i].w;
    sort(e+1,e+n+1,cmp);
    kruskal();
    int frt=find(1);
    for(register int i=2;i<=n;++i){
        if(find(i)!=frt){
            cout<<"orz"<<endl;
            return 0;
        }
    }cout<<ans<<endl;
    return 0;
}
