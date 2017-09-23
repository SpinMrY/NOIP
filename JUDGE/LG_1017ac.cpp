#include <bits/stdc++.h>
using namespace std;
//define
char cm[]="0123456789ABCDEFG";
int m,n,base,ans[10005],num;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>base;
    m=n;
    while(abs(n)!=0){
        ans[num]=(abs(base)+n%base)%(abs(base));
        n-=ans[num++];
        n/=base;
    }
    cout<<m<<"=";
    for(int i=num-1;i>=0;i--)cout<<cm[ans[i]];
    cout<<"(base"<<base<<")";
    return 0;
}
