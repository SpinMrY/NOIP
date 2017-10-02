#include <bits/stdc++.h>
using namespace std;
//define
int c[1005],cmd,n,m,id;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>c[i];
    for(int i=1;i<=m;i++){
        cin>>cmd>>id;
        if(cmd==2){cout<<c[id]<<endl;}
        if(cmd==1){c[id]--;}
    }
    return 0;
}
