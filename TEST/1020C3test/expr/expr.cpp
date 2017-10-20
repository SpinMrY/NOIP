#include <iostream>
#include <cstdio>
using namespace std;
//define
const int mod=10000;
//fun
inline long long calc(){
    char exp;long long x=0,y=0;cin>>x;
times:
    exp=getchar();
    if(exp!='*')goto plus;
    else {cin>>y;x=(x*y)%mod;goto times;}
plus:
    if(exp=='+'){x+=calc();x%=mod;return x;}
    return x%mod;
}
//main
int main(){
    freopen("expr.in","r",stdin);
    freopen("expr.out","w",stdout);
    long long ans=calc();ans%=mod;
    cout<<ans<<endl;
    return 0;
}
