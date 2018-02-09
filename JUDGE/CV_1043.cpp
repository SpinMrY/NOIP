#include <bits/stdc++.h>
using namespace std;
//define
int x,y,v,mmp[15][15],n,f[15][15][15][15];
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    while(cin>>x>>y>>v){
        if(x==0&&y==0&&v==0){
            break;
        }
        else{mmp[x][y]=v;}
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                for(int l=1;l<=n;l++){
                    f[i][j][k][l]=max(max(f[i-1][j][k-1][l],f[i-1][j][k][l-1]),max(f[i][j-1][k][l-1],f[i][j-1][k-1][l]))+mmp[i][j]+mmp[k][l];
//                    cout<<f[i][j][k][l]<<endl;
//                    printf("n=%d i=%d j=%d k=%d l=%d",n,i,j,k,l);
                    if(i==k&&j==l)f[i][j][k][l]-=mmp[i][j];
                }
            }
        }
    }
    cout<<f[n][n][n][n]<<endl;
    return 0;
}
