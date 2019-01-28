#include <iostream>
#include <cstdio>
using namespace std;

//define
const int maxn=5e5+5;
int c[maxn],n,m;

int lowbit(int x){return x&(-x);}

void add(int x,int y){
    int aa=x;
    while(aa<=n){
        c[aa]+=y;aa+=lowbit(aa);
    }
}

int sum(int x){
    int ans=0,aa=x;
    while(aa){
        ans+=c[aa];aa-=lowbit(aa);
    }
    return ans;
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;int a,x,y;
    for(register int i=1;i<=n;++i)cin>>a,add(i,a);
    while(m--){
        cin>>a>>x>>y;
        if(a==1)add(x,y);
        else if(a==2)cout<<sum(y)-sum(x-1)<<endl;
    }return 0;
}
