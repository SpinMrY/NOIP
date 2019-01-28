#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

//define
const int maxn=1e5+5;
typedef long long ll;
int n,p;

inline void exgcd(int a,int b,int& x,int& y){
    if(!b){x=1;y=0;return;}
    else{exgcd(b,a%b,x,y);int z=x;x=y;y=z-a/b*y;}
}

int inv(int a){
    int x,y;
    exgcd(a,p,x,y);
    return (x+p)%p;
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>p;
    for(register int i=1;i<=n;++i){
        cout<<inv(i)<<endl;
    }
    return 0;
}
