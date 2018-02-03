#include <bits/stdc++.h>
using namespace std;
//define
int mmp[250],n,k,lt[250];
int ans;
//function
int check(){
    for(int i=1;i<=n;i++)if(mmp[i]==0)return 0;
    return 1;
}
//main
int main(){
    ios::sync_with_stdio(false);
    int t;cin>>t;mmp[0]=1;
    while(t--){
        ans=-1;int cnt;
        memset(mmp,0,sizeof(mmp));
        mmp[0]=1;
        cin>>n>>k;cnt=n;
        for(int i=1;i<=k;i++)cin>>lt[i];
        while(cnt!=0){
            ans++;
            for(int i=1;i<=k;i++){
                if(mmp[lt[i]+ans<=n?lt[i]+ans:0]==0){mmp[lt[i]+ans<=n?lt[i]+ans:0]=1;cnt--;}
                if(mmp[lt[i]-ans>0?lt[i]-ans:0]==0){mmp[lt[i]-ans>=0?lt[i]-ans:0]=1;cnt--;}
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
