#include <bits/stdc++.h>
using namespace std;
//define
int ans,a,k;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>a>>k;
    for(int i=1;i<=a;i++){
        if(k>=1)if(a%i==0){ans+=i;k--;}
    }
    cout<<ans<<endl;
}
