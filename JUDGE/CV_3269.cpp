#include <bits/stdc++.h>
using namespace std;
//define
int n,V,f[2000005];
void Max(int &x,int y){
    if(x<y)x=y;
}

void p01(int v,int w){
    for(int i=V;i>=v;i--){
        Max(f[i],f[i-v]+w);
    }
}
void pfull(int v,int w){
    for(int i=v;i<=V;i++){
        Max(f[i],f[i-v]+w);
    }
}
void p3(int v,int w,int num){
    for(int k=1;k<num;num-=k,k<<=1)p01(v*k,w*k);
    p01(v*num,w*num);
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>V;
    for(int i=1,v,w,num;i<=n;i++){
        cin>>v>>w>>num;
        if(num==-1||V/v<=num)pfull(v,w);
        else if(num==1)p01(v,w);
        else p3(v,w,num);
    }
    cout<<f[V]<<endl;
    return 0;
}
