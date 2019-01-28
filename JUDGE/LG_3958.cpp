#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

//define
const int maxn=1005;
typedef long long ll;
int tot,vis[maxn<<2],head[maxn<<2],n;
ll x[maxn],y[maxn],z[maxn],h,r;

struct Graph{
    int v,next;
}e[maxn<<2];

void addedge(int u,int v){
    e[++tot]=(Graph){v,head[u]};
    head[u]=tot;
}

void dfs(int s){
    vis[s]=1;
    for(int i=head[s];i;i=e[i].next){
        if(vis[e[i].v])continue;
        dfs(e[i].v);
    }
}

bool check(int i,int j){
    ll a=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
    return a<=((r*r)<<2);
}

int work(){
    memset(vis,0,sizeof(vis));
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
    memset(z,0,sizeof(z));
    memset(head,0,sizeof(head));
    cin>>n>>h>>r;
    for(register int i=1;i<=n;i++){
        cin>>x[i]>>y[i]>>z[i];
        if(z[i]<=r){addedge(n+1,i);addedge(i,n+1);}
        else if(z[i]>=h-r){addedge(n+2,i);addedge(i,n+2);}
    }
    for(register int i=1;i<=n;i++){
        for(register int j=i+1;j<=n;j++){
            if(check(j,i)){addedge(i,j);addedge(j,i);}
        }
    }
    dfs(n+1);
    if(vis[n+2])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

//main
int main(){
    ios::sync_with_stdio(false);
    int t;cin>>t;
    while(t--){
        work();
    }
    return 0;
}
