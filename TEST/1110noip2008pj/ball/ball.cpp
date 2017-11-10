#include <iostream>
#include <cstdio>
using namespace std;
//define
int f[35][35];
int n,m;
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("ball.in","r",stdin);
    freopen("ball.out","w",stdout);
    cin>>n>>m;
    f[0][1]=1;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            f[i][j]=f[i-1][j==1?n:j-1]+f[i-1][j==n?1:j+1];
    cout<<f[m][1]<<endl;
    return 0;
}
