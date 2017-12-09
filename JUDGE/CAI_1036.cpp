#include <bits/stdc++.h>
using namespace std;
//define
int n,ans;
void dfs(int a,int b,int c){
    if(c==n){
        ans++;
        return;
    }if(a>0&&b<n)dfs(a-1,b+1,c);
    if(n>0&&c<n)dfs(a,b-1,c+1);
}
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    dfs(1,0,0);
    cout<<ans;
    return 0;
}
