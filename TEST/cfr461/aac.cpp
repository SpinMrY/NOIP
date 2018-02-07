#include <bits/stdc++.h>
using namespace std;
//define
int x,y,ans;
//function
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("ans2","w",stdout);
    cin>>x>>y;
    if(x==1&&y==0){cout<<"No"<<endl;return 0;}
    x=x-y+1;    
    if(x%2==0&&x>=0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
