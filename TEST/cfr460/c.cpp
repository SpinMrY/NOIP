#include <bits/stdc++.h>
using namespace std;
//define
int n,m,k;
int ans;
int mmp[2005][2005];
//main
int main(){
    char tmp;
    ios::sync_with_stdio(false);
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>tmp;if(tmp=='.')mmp[i][j]=1;
            if(k==1){
                if(mmp[i][j]==1)ans++;
            }
        }
    }
    if(k==1){cout<<ans<<endl;return 0;}
    for(int i=1;i<=m;i++){
        
