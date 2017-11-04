#include <iostream>
using namespace std;
//define
int ans=0x7f7f7f7f,n,a1,p1,a2,p2,a3,p3;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>a1>>p1>>a2>>p2>>a3>>p3;
    int tmp=n/a1+(n%a1>0?1:0);
    ans=min(ans,tmp*p1);
    tmp=n/a2+(n%a2>0?1:0);
    ans=min(ans,tmp*p2);
    tmp=n/a3+(n%a3>0?1:0);
    ans=min(ans,tmp*p3);
    cout<<ans<<endl;
    
    return 0;
}
