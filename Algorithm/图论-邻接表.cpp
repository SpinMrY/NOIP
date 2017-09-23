#include <bits/stdc++.h>
using namespace std;
//define
struct pic{
    int u,v;
}p[1000050];
int tnext[1000050]={0};
//main
int main(){
    int n;
    int tmp=-1;cout<<tmp<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p[i].u>>p[i].v;
    }
    int vnow,unow;
    for(int i=1;i<=n;i++){
        unow=p[i].u;
        vnow=p[i].v;int tmpnext;
        tnext[i]=-1;
        for(int j=i-1;j>=1;j--){
            if(p[j].u==unow){
                tmpnext=j;break;
            }
        }
        tnext[i]=tmpnext;
    }
    for(int i=1;i<=n;i++){
        cout<<"next["<<i<<"]"<<tnext[i]<<endl;
    }
    return 0;
}
