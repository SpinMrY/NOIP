#include <bits/stdc++.h>
using namespace std;
//define
int vis[50],ans[105],n,r;
//function
void dfs(int dep){
    if(dep==n+1){
        for(int i=1;i<=n;i++)cout<<ans[i]<<' ';cout<<endl;
        return;
    }
    else{
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                vis[i]=1;ans[dep]=i;dfs(dep+1);vis[i]=0;ans[dep]=0;
            }}}return;}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;dfs(1);
    return 0;}
