#include <iostream>
using namespace std;
//define
int const inf=-0x7f7f7f7f;
int n,m,map[150][150];
//function
void point(int x,int y){
    map[x+1][y]++;
    map[x+1][y+1]++;
    map[x+1][y-1]++;
    map[x-1][y+1]++;
    map[x-1][y-1]++;
    map[x-1][y]++;
    map[x][y+1]++;
    map[x][y-1]++;
}
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("mine.in","r",stdin);
    freopen("mine.out","w",stdout);
    cin>>n>>m;char tmp;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++){cin>>tmp;map[i][j]=(tmp=='*'?inf:0);}
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)if(map[i][j]<=-1)point(i,j);
    for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){if(map[i][j]<=-1)cout<<'*';else cout<<map[i][j];}cout<<endl;}
    return 0;
}
