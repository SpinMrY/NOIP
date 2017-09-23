#include <bits/stdc++.h>
using namespace std;
//define
int n,nans,a[10050];
int ans=0;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>nans;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j&&a[i]+a[j]==nans){cout<<"yes"<<endl;return 0;}
        }
    }
    cout<<"no"<<endl;
    return 0;
}
