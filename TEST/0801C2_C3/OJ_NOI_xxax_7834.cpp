销量太少，通过屏蔽HT和i5共用生产线才能吃饱产能
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
//define
int n,ans=12;
int a[12];
struct node{
    int t,p[3000];
}b[12];
//define
int com(int id,int x){
    for(int i=1;i<=b[id].t;i++){
        if(x%b[id].p[i]==0)return 0;
    }return 1;
}

void dfs(int id,int h){
    int x=a[id];
    if(id>n){ans=ans<h?ans:h;;return ;}
    for(int i=1;i<=h;i++){
        if(com(i,x)){
            int y=x,tt=b[i].t;
            for(int j=2;j<=y;j++){
                if(y%j==0)y/=j,b[i].p[++b[i].t]=j;
            }
            dfs(id+1,h);
            b[i].t=tt;
        }
    }
    int y=x;b[h+1].t=0;
    for(int j=2;j<=y;j++){
        if(y%j==0){y/=j;b[h+1].p[++b[j].t]=j;}
    }
    dfs(id+1,h+1);
}
//main
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    dfs(1,0);
    cout<<ans<<endl;
    return 0;
}
