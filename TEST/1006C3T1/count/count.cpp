#include <iostream>
using namespace std;
//define
int n,jzm[120],t1926[100005],tot;
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("count.in","r",stdin);
    freopen("count.out","w",stdout);
    cin>>n;for(int i=1;i<=n;i++)cin>>jzm[i];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j)t1926[jzm[i]+jzm[j]]=1;
        }
    }
    for(int i=1;i<=n;i++)
        if(t1926[jzm[i]]==1)tot++;
    cout<<tot<<endl;
    return 0;
}
