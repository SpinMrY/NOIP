#include <bits/stdc++.h>
using namespace std;
//define
int n,t[100005];
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;int temp;
    for(int i=1;i<=n;i++){
        cin>>temp;t[i]=temp;
    }
    sort(t+1,t+n+1);
    for(int i=1;i<=n;i++){
        if(t[i]!=t[i+1])cout<<t[i]<<" ";
    }
    return 0;
}
