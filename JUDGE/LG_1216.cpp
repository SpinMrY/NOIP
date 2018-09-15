#include <iostream>
#include <cstdio>
using namespace std;

//define
const int maxn=1005;
int n,a[maxn][maxn],ans;

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
            a[i][j]+=max(a[i-1][j],a[i-1][j-1]);
            ans=max(ans,a[i][j]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
