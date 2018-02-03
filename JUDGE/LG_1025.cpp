#include <bits/stdc++.h>
using namespace std;
//define
int n,k,last[10]={1},ans;
//define
void dfs(int id,int num){
    if(id==k){ans++;return;}
    else{
        int tmp=(n-num)/(k-id+1);
        for(int i=last[id-1];i<=tmp;i++){
            last[id]=i;
            dfs(id+1,num+i);
        }
    }return;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>k;
    dfs(1,0);
    cout<<ans<<endl;
    return 0;
}
