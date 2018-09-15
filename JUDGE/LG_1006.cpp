#include <iostream>
#include <cstdio>
using namespace std;

//define
const int maxn=55;
int f[maxn][maxn][maxn][maxn],a[maxn][maxn],n,m;

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(int k=1;k<=n;k++){
                for(int l=j+1;l<=m;l++){
                    f[i][j][k][l]=max(f[i-1][j][k-1][l],max(f[i-1][j][k][l-1],max(f[i][j-1][k][l-1],f[i][j-1][k-1][l])))+a[i][j]+a[k][l];
                }
            }
        }
    }
    cout<<f[n][m-1][n-1][m]<<endl;
    return 0;
}
