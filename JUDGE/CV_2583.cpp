#include <bits/stdc++.h>
using namespace std;
//define
int n,mmp[105][105],f[205][120][120];
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>mmp[i][j];
        }
    }
    int p=2*n-2;
    for(int k=1;k<p;k++){
        for(int i=1;i<=n&&i<=k+1;i++){
            for(int j=1;j<=n&&j<=k+1;j++){
                if(i!=j){
//                    printf("%d %d %d %d\n",p,k,i,j);
                    f[k][i][j]=max(max(f[k-1][i][j],f[k-1][i-1][j]),max(f[k-1][i][j-1],f[k-1][i-1][j-1]))+abs(mmp[i][k+2-i]-mmp[j][k+2-j]);
                }
            }
        }
    }
    f[p][n][n]=max(max(f[p-1][n][n],f[p-1][n-1][n]),max(f[p-1][n][n-1],f[p-1][n-1][n-1]));
    cout<<f[p][n][n]<<endl;
    return 0;
}
