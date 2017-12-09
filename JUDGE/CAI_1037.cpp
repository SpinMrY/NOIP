#include <iostream>
#include <cstdio>
using namespace std;
//define
struct Saaa{
    int a,b;
}ans[16666];
struct Saaa amove[4]={{0,-1},{-1,-0},{0,1},{1,0}};
int mmap[16][16];
int sx,sy,ex,ey,nx,ny;
//dfs
void dfs(int x,int y,int dep){
    ans[dep].a=x;ans[dep].b=y;
    if(x==ex&&y==ey){
        printf("(%d,%d)",ans[1].a,ans[1].b);
        for(int i=2;i<=dep;i++){
            printf("->(%d,%d)",ans[i].a,ans[i].b);
        }cout<<endl;
    }else{
        for(int i=0;i<=3;i++){
            if(mmap[x+amove[i].a][y+amove[i].b]==1){
                mmap[x+amove[i].a][y+amove[i].b]=0;
                dfs(x+amove[i].a,y+amove[i].b,dep+1);
                mmap[x+amove[i].a][y+amove[i].b]=1;
            }
        }
    }
}
int main(){
    cin>>nx>>ny;
    for(int i=1;i<=nx;i++){
        for(int j=1;j<=ny;j++){
            cin>>mmap[i][j];
        }
    }
    cin>>sx>>sy;
    cin>>ex>>ey;
    dfs(sx,sy,1);
    return 0;
}
