#include <bits/stdc++.h>
using namespace std;
//define
int anss,vis[50],ans[105],n,r,b[105];
//function
int is_p(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }return 1;
}
void dfs(int dep){
    if(dep==r+1){
        int tmp=0;
        for(int i=1;i<=r;i++)tmp+=b[ans[i]];
        if(is_p(tmp))anss++;
        return;
    }
    else{
        for(int i=ans[dep-1]+1;i<=n;i++){
            if(!vis[i]){
                vis[i]=1;ans[dep]=i;dfs(dep+1);vis[i]=0;ans[dep]=0;
            }
        }
    }
    return;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>r;
    for(int i=1;i<=n;i++){cin>>b[i];vis[i]=0;}
    dfs(1);
    cout<<anss<<endl;
    return 0;   
}
