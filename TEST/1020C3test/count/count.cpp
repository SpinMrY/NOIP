#include <iostream>
#include <cstdio>
using namespace std;
//define
int ans,n,x;
//function
int fun(int a){
    int tmp=0,aans=0;
loop:
    tmp=a%10;
    aans+=(tmp==x)?1:0;
    a/=10;
    if(a>0)goto loop;
    return aans;
}
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("count.in","r",stdin);
    freopen("count.out","w",stdout);
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        ans+=fun(i);
    }
    cout<<ans<<endl;
    return 0;
}
