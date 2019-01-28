#include <iostream>
#include <cstdio>
using namespace std;

//define
const int maxn=2000+5;
long long f[maxn][maxn],pre[maxn][maxn],t,n,m,k,ans;

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>t>>k;
    f[0][0]=f[1][1]=f[1][0]=1;
    for(int i=2;i<=2000;++i){
        f[i][0]=1;
        for(int j=1;j<=i;++j){
            f[i][j]=(f[i-1][j-1]+f[i-1][j])%k;
            pre[i][j]=pre[i][j-1]+pre[i-1][j]-pre[i-1][j-1];
            if(!f[i][j])pre[i][j]++;
        }pre[i][i+1]=pre[i][i];
    }
    while(t--){
        long long a,b;cin>>a>>b;
        if(b>a)cout<<pre[a][a];
        else cout<<pre[a][b]<<endl;
    }
    return 0;
}
