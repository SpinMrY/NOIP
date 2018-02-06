#include <bits/stdc++.h>

using namespace std;
//define
int f[2005],t,m,v[105],w[105];
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>t>>m;
    for(int i=1;i<=m;i++){
        cin>>w[i]>>v[i];
    }
    for(int i=1;i<=m;i++){
        for(int j=t;j>=w[i];j--){
            if(f[j]<f[j-w[i]]+v[i])f[j]=f[j-w[i]]+v[i];
        }
    }
    cout<<f[t]<<endl;
    return 0;
}
