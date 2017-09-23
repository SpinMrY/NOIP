#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
//define
int l,m,map[10050],ans;
struct subway{int s,e;}sb[105];
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("tree.in","r",stdin);freopen("tree.out","w",stdout);
    cin>>l>>m;
    for(int i=1;i<=m;i++){cin>>sb[i].s>>sb[i].e;for(int j=sb[i].s;j<=sb[i].e;j++){map[j]=1;}}
    for(int i=0;i<=l;i++){if(map[i]==0)ans++;}
    cout<<ans;
    return 0;
}
