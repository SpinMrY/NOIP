#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;
//define
int n,m,z;
int ans;
int f[205][205];
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("system.in","r",stdin);
    freopen("system.out","w",stdout);
    cin>>n>>m>>z;
    int v,u,w;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            f[i][j]=0x3F3F3F3F;
        }
    }
    for(int i=1;i<=m;i++){
        cin>>u>>v>>w;
        f[u][v]=w;
        f[v][u]=w;
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(f[i][k]+f[k][j]<f[i][j]){
                    f[i][j]=f[i][k]+f[k][j];
                }
            }
        }
    }
    ans=f[1][n];
    if(ans>=z){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }cout<<ans;
    return 0;
}
