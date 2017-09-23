#include <iostream>
#include <cstdio>
using namespace std;
int ans,a[11],n;
int main(){
//    ios::sync_with_stdio(false);
    freopen("apple.in","r",stdin);freopen("apple.out","w",stdout);
    for(int i=1;i<=10;i++)scnaf("%d",&a[i]);cin>>n;n+=30;
    for(int i=1;i<=10;i++)if(a[i]<=n)ans++;
    cout<<ans;
    return 0;
}
