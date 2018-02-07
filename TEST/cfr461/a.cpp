#include <bits/stdc++.h>
using namespace std;
//define
int x,y,ans;
//function
void dfs(int origin,int copied){
    if(origin==y&&copied==x)ans=1;
    else if(origin>y)return;
    else if(copied>x)return;
    else{
        dfs(origin+1,copied+1);
        dfs(origin,copied+2);
    }
    return;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>x>>y;
    dfs(1,0);
    if(ans==1)cout<<"Yes"<<endl;
    else if(ans==0)cout<<"No"<<endl; 
    return 0;
}
