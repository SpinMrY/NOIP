#include <bits/stdc++.h>
using namespace std;
//define
long long a[10000008],n,q;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int x,y;
    sort(a+1,a+n+1);
    while(q--){
        int ans=0,flag=0;
        cin>>x>>y;
        int tmp=pow(10,x);
        for(int i=1;i<=n;i++){
            if(a[i]%tmp==y){
                ans=a[i];flag=1;break;
            }
        }
        if(flag)cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
