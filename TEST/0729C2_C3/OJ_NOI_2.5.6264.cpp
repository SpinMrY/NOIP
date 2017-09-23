#include <bits/stdc++.h>
using namespace std;
//define
int sx,sy,ex,ey;
int ans,al[10050][10050],nx,ny;
char _map[10050][10050];
int min_count=65535;
//function
void bfs(int u,int v,int i,int j){
    int t=al[u][v];
    if(u==i && v==j){
        min_count=t;
    }
    t++;
    if(v<nx-1 && _map[u][v+1]!='#' && al[u][v+1]>t){
        al[u][v+1]=t;
        bfs(u,v+1,i,j);
    }
    if(u>0 && _map[u-1][v]!='#' && al[u-1][v]>t){
        al[u-1][v]=t;
        bfs(u-1,v,i,j);
    }
    if(v>0 && _map[u][v-1]!='#' && al[u][v-1]>t){
        al[u][v-1]=t;
        bfs(u,v-1,i,j);
    }
    if(u<ny-1 && _map[u+1][v] && al[u+1][v]){
        al[u+1][v]=t;
        bfs(u+1,v,i,j);
    }
}   
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>nx>>ny;
    for(int i=0;i<nx;i++){
        for(int j=0;j<ny;j++){
            cin>>_map[i][j];
            if(_map[i][j]=='S'){
                sx=i,sy=j;
            }
            if(_map[i][j]=='T'){
                ex=i,ey=j;
            }
        }
    }
    memset(al,1,sizeof(al));
    al[sx][sy]=0;
    bfs(sx,sy,ex,ey);
    cout<<min_count<<endl;
    
    return 0;
}   
