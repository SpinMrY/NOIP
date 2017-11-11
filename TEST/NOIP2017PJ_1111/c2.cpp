#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
//define
int flag,ans=-1,m,n,vis[1005][1005];
struct mmap{
    int ism,c;
}map[105][105];
//define
void mogic(int x,int y,int c){
    map[x][y].c=c;
    map[x][y].ism=0;
}
void dfs(int x,int y,int ism,int sans){
    if(x==m&&y==m){
        if(ans==-1)ans=sans;
        else ans=min(sans,ans);
        return;
    }
    else if(vis[x][y]==1)return;
    
    else{
        //边界条件
        if(map[x][y].c==-1)return;
        if(x>m||y>m||x<1||y<1)return;
        vis[x][y]=1;
        if(!ism==1){
            
//上

        /*flag=0;
        if(map[x][y+1].c!=-1){
            if(map[x][y].c==map[x][y+1].c)dfs(x,y+1,0,sans);
            else if(map[x][y].c!=map[x][y+1].c)dfs(x,y+1,0,sans+1);
        }
        else if(ism==0){
            flag=1;
            if(map[x][y+2].c!=-1||map[x+1][y+1].c!=-1||map[x-1][y+1].c!=-1){
                mogic(x,y+1,map[x][y].c);
                dfs(x,y+1,1,sans+2);
            }
        }
        if(flag==1){
            if(map[x][y+2].c!=-1||map[x+1][y+1].c!=-1||map[x-1][y+1].c!=-1){
                mogic(x,y+1,map[x][y].c==1?0:1);
                dfs(x,y+1,1,sans+2);
            }
        }
        //下
        flag=0;
        if(map[x][y-1].c!=-1){
            if(map[x][y].c==map[x][y-1].c)dfs(x,y-1,0,sans);
            else if(map[x][y].c!=map[x][y-1].c)dfs(x,y-1,0,sans+1);
        }
        else if(ism==0){
            flag=1;
            if(map[x][y-2].c!=-1||map[x-1][y-1].c!=-1||map[x+1][y-1].c!=-1){
                mogic(x,y-1,map[x][y].c);
                dfs(x,y-1,1,sans+2);
            }
        }
        if(flag==1){
            if(map[x][y+2].c!=-1||map[x-1][y-1].c!=-1||map[x+1][y-1].c!=-1){
                mogic(x,y-1,map[x][y].c==1?0:1);
                dfs(x,y-1,1,sans+2);
            }
        }
        //左
        flag=0;
        if(map[x-1][y].c!=-1){
            if(map[x][y].c==map[x-1][y].c)dfs(x-1,y,0,sans);
            else if(map[x][y].c!=map[x-1][y].c)dfs(x-1,y,0,sans+1);
        }
        else if(ism==0){
            flag=1;
            if(map[x-2][y].c!=-1||map[x-1][y-1].c!=-1||map[x+1][y+1].c!=-1){
                mogic(x-1,y,map[x][y].c);
                dfs(x-1,y,1,sans+2);
            }
        }
        if(flag==1){
            if(map[x-2][y].c!=-1||map[x-1][y-1].c!=-1||map[x+1][y+1].c!=-1){
                mogic(x-1,y,map[x][y].c==1?0:1);
                dfs(x-1,y,1,sans+2);
            }
        }
        //右
        flag=0;
        if(map[x+1][y].c!=-1){
            if(map[x][y].c==map[x+1][y].c)dfs(x-1,y,0,sans);
            else if(map[x][y].c!=map[x+1][y].c)dfs(x+1,y,0,sans+1);
        }
        else if(ism==0){
            flag=1;
            if(map[x+2][y].c!=-1||map[x+1][y-1].c!=-1||map[x+1][y+1].c!=-1){
                mogic(x+1,y,map[x][y].c);
                dfs(x+1,y,1,sans+2);
            }
        }
        if(flag==1){
            if(map[x+2][y].c!=-1||map[x+1][y-1].c!=-1||map[x+1][y+1].c!=-1){
                mogic(x+1,y,map[x][y].c==1?0:1);
                dfs(x+1,y,1,sans+2);
            }
        }
        if(map[x][y].ism==1){map[x][y].c==-1,map[x][y].ism=0;}
        */
    }
}
//main
int main(){
    ios::sync_with_stdio(false);
    int xx,yy,cc;
    cin>>m>>n;
    for(int i=1;i<=m+1;i++){
        for(int j=1;j<=m+1;j++){
            map[i][j].c=-1;
        }
    }
    for(int i=1;i<=n;i++){
        cin>>xx>>yy>>cc;
        map[xx][yy].c=cc;
    }
    dfs(1,1,0,0);
    cout<<ans<<endl;
    return 0;
}
