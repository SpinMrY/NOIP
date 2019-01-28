#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

//define
const int maxn=1e7+5;
int phi[maxn],is[maxn],prime[maxn],tot;

void eular(int n){
    phi[1]=1;
    for(register int i=2;i<=n;++i){
        if(!is[i]){prime[++tot]=i;phi[i]=i-1;}
        for(register int j=1;j<=tot;++j){
            if(i*prime[j]>n)break;
            is[i*prime[j]]=1;
            if(i%prime[j]==0){
                phi[i*prime[j]]=phi[i]*prime[j];break;
            }else{
                phi[i*prime[j]]=phi[i]*phi[prime[j]];
            }
        }
    }
}

//main
int main(){
    ios::sync_with_stdio(false);
    int n,m;cin>>n>>m;eular(n);
    while(m--){
        int a;cin>>a;if(a-1==phi[a])cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }return 0;
}
