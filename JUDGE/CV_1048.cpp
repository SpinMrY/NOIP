#include <bits/stdc++.h>
using namespace std;
//define
int f[105][105],a[105],s[105],n;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            f[i][j]=100000000;
    for(int i=1;i<=n;i++){
        s[i]=a[i]+s[i-1];
        f[i][i+1]=a[i]+a[i+1];
        f[i][i]=0;
    }
    for(int i=2;i<n;i++){
        for(int j=1;j<=n-i;j++){
            for(int k=j;k<j+i;k++){
                f[j][j+i]=min(f[j][j+i],f[j][k]+f[k+1][j+i]+s[j+i]-s[j-1]);
            }
        }
    }
    cout<<f[1][n]<<endl;
    return 0;
}
