#include<bits/stdc++.h>
using namespace std;
//define
const int MAXN=200005;
struct Graph{
    int to,next;
}g[MAXN*2];
int n,vis[MAXN],head[MAXN],cnt,w[MAXN],maxn=-1,ans=0;
//function
void addedge(int u,int v){
    g[++cnt].to=v,
    g[cnt].next=head[u];
    head[u]=cnt;
}
void dfs(int ut, int vt, int deep){
    if(deep==2)return;
    for(int i=head[ut];i;i=g[i].next){
        int v=g[i].to;
        if(v==vt) continue;
        else{
            if(deep==1){
                if(w[v]*w[vt]>maxn)maxn=w[v]*w[vt];
                ans=(ans+w[v]*w[vt])%10007;
            }
            dfs(v,vt,deep+1);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    freopen("link.in","r",stdin);
    freopen("link.out","w",stdout);
    cin>>n;int u,v;
    for(int i=1;i<n;i++){
        cin>>u>>v;
        addedge(u,v);
        addedge(v,u);
    }
    for(int i=1;i<=n;i++)cin>>w[i];
    for(int i=1;i<=n;i++)dfs(i,i,0);
    cout<<maxn<<' '<<ans<<endl;
    fclose(stdin);fclose(stdout);
    return 0;
}
