#include <bits/stdc++.h>
using namespace std;
//define
int ans,f[1005][1005],a[1005],n;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){cin>>a[i];a[i+n]=a[i];}
    for(int i=1;i<n;i++){
        for(int j=1,l=i+2;l<=2*n;l++,j++){
            for(int k=j+1;k<l;k++){
                f[j][l]=max(f[j][l],f[j][k]+f[k][l]+a[j]*a[k]*a[l]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        ans=max(f[i][i+n],ans);
    }
    cout<<ans<<endl;
    return 0;
}
