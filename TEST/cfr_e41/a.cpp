#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int m,n,c[1005],ans=19260817;
//function

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;int temp;
    for(int i=1;i<=m;i++){
        cin>>temp;
        c[temp]++;
    }
    for(int i=1;i<=n;i++){
        if(c[i]==0){ans=0;break;}
        else ans=min(ans,c[n]);
    }
    cout<<ans<<endl;
    return 0;
}
