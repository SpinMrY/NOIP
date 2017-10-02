#include <bits/stdc++.h>
1;4803;0cusing namespace std;
//define
int cnt,n,m,xs,wm=1,head[100005];
struct v{
    int u,v,next;
}edge[100005];
//define
void add(int u,int v){
    edge[cnt].u=u;
    edge[cnt].v=v;
    edge[cnt].next=head[u];
    head[u]=cnt++;
}
//function
int dfs(int u,int dep){
    if(u>n)return dep;
    for(int i=head[u];i!=-1;i=edge[i].next){
        if(u<edge[i].v){
            wm++;
            dfs(edge[i].v,dep+1);
        }
    }
    if(
}
//main
int main(){
    ios::sync_with_stdio(false);
    memset(head,-1,sizeof(head));
    cin>>n>>m;
    int tu,tv;
    for(int i=1;i<=m;i++){
        cin>>tu>>tv;
        add(tu,tv);
    }
    dfs(1,1);
    cout<<xs<<endl;
}
