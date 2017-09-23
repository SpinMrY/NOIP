#include <bits/stdc++.h>
using namespace std;
//define
const int inf=100000000;

int head[10050],nx,ny,pointflag=1;
int vis[10050],ans,s,e;

char tmp;

struct Graph{
    int u,v,next;
}g[10050];
struct Map{
    int index,edge;
}mmap[10050][10050];

void addedge(int u,int v){
    g[++cnt].v=v;
    g[cnt].next=head[u];
    e[cnt].w=1;
    head[u]=cnt;
}

void dijkstra(int start,int end){

}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>nx>>ny;
    for(int i=1;i<=nx;i++){
        for(int j=1;j<=ny;j++){
            cin>>tmp;
            if(tmp=='S')s=pointflag;
            if(tmp=='T')e=pointflag;
            if(tmp=='.'){
                mmap[x][y]
