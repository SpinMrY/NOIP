#include <iostream>
#include <cstdio>
using namespace std;

//define
const int maxn=2e5+5;
int fa[maxn<<1],n,m;

int find(int x){return x==fa[x]?x:fa[x]=find(fa[x]);}

void uion(int x,int y){fa[find(x)]=find(y);}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(register int i=1;i<=n;++i)fa[i]=i;
    while(m--){
        int a,x,y;cin>>a>>x>>y;
        if(a==1){uion(x,y);}
        else if(a==2){
            if(find(x)==find(y))cout<<"Y"<<endl;
            else cout<<"N"<<endl;
        }
    }
    return 0;
}
