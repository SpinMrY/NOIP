#include <iostream>
#include <cstdio>
#include <cmath>
#define ll long long
using namespace std;
//define
ll nzero,n,k,m,x,ans;
//function
/*int apow(ll kn,ll k){
    ll ans=kn;
    for(int i=1;i<k;i++){
        ans=kn*ans;
        ans%=n;
    }return ans;
    }*/
int apow(ll kn,ll k){
    ll ans=1,base=kn;
    while(k!=0){
        if(k&1!=0){
            ans=(ans*base)%n;
        }
        base*=base;base%=n;
        k>>=1;
    }
    return ans;
}
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("circle.in","r",stdin);
    freopen("circle.out","w",stdout);
    cin>>n>>m>>k>>x;
    ll fuck=apow(10,k);
    ans=x+m*fuck;ans%=n;
    cout<<ans<<endl;
    return 0;
}
