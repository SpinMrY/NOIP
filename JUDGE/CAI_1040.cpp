#include <iostream>
#include <algorithm>
using namespace std;
const int MAX=100;
int n,vis[MAX],Map[MAX];
int a[MAX]={3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61};
void print(){
    for(int i=1;i<=n;i++)
        if(i==1)cout<<Map[i];
        else cout<<" "<<Map[i];
    cout<<endl;
}
int pand(int x){
    for(int i=0;i<16;i++)
        if(x==a[i])return 1;
    return 0;
}
void dfs(int x,int ti){
    if(ti==n){
        if(pand(x+1)){
            print();
        }
    }
    for(int i=2;i<=n;i++){
        if(vis[i]==0&&pand(i+x)){
            vis[i]=1;
            Map[ti+1]=i;
            dfs(i,ti+1);
            vis[i]=0;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    vis[1]=1;
    Map[1]=1;
    dfs(1,1);
    return 0;
}
