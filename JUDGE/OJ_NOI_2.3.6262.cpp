#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
//define
int n,k,map[105][105],last[105][105],ans;
//function
void p();
void FUCKING(int x,int y){
    last[x-1][y]=(last[x-1][y]==0?0:2);
    last[x+1][y]=(last[x+1][y]==0?0:2);
    last[x][y-1]=(last[x][y-1]==0?0:2);
    last[x][y+1]=(last[x][y+1]==0?0:2);
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;char tmp;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>tmp;
            if(tmp=='#')map[i][j]=0;
            if(tmp=='@')map[i][j]=2;
            if(tmp=='.')map[i][j]=1;
	    last[i][j]=map[i][j];
        }
    }cin>>k;   
for(int kk=1;kk<=k;kk++){
    memcpy(map,last,sizeof(map));  
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(map[i][j]==2){
                    FUCKING(i,j);
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(map[i][j]==2)ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
