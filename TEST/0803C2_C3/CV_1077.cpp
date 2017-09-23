#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
//define
const int MAXN=1050;

int n,m,x,y;
int dis[MAXN][MAXN];
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    memset(dis,0x3f,sizeof(dis));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>dis[i][j];
        }
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dis[i][j]=min(dis[i][k]+dis[k][j],dis[i][j]);
            }
        }
    }cin>>m;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        cout<<dis[x][y]<<endl;
    }
    return 0;
}
