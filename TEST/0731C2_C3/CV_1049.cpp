#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
//define
int map[10][10],copy[10][10],stan,First,cnt;
bool vis[10][10],ans;
int e[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
char ch[10];
void check(int x,int y){
    vis[x][y]=true;cnt++;
    for(int i=0;i<4;i++){
        int xx=x+e[i][0],yy=y+e[i][1];
        if(xx<=5 && xx>=1 && yy<=5 && yy>=1 && !vis[xx][yy] && map[xx][yy]){
            check(xx,yy);
        }
    }
}
void dfs(int x,int y,int k){
    if(k==stan){
        int xx=0,yy=0,now=0;
        for(int i=i;i<=5;i++){
            for(int j=1;j<=5;j++){
                if(map[i][j]){xx=i,yy=j;now++;}
            }
        }
    cnt=0;
    memset(vis,0,sizeof(vis));
    check(xx,yy);
    if(cnt==now){ans=1;return;}
    }
    if(ans||x==6)return;
    for(int i=y;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(map[i][j])continue;
            map[i][j]=1;
            dfs(i,j,k+1);
            map[i][j]=0;
        }
    }
    for(int i=x+1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(map[i][j])continue;
            map[i][j]=1;
            dfs(i,j,k+1);
            map[i][k]=0;
        }
    }
}
//main
int main(){
    ios::sync_with_stdio(false);
    for(int i=1;i<=5;i++){
        scanf("%s",ch+1);
        for(int j=1;j<=5;j++){
            map[i][j]=ch[j]-'0';
        }
    }
    for(stan=0;stan<=25;stan++){
        dfs(1,1,0);
        if(ans==1){cout<<stan<<endl;return 0;}
    }
}
