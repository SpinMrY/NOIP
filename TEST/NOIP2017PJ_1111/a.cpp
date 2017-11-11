#include <bits/stdc++.h>
using namespace std;
//define
int a,b,c,ans;
//main
int main(){
    cin>>a>>b>>c;
    ans=floor(a*0.2+0.5)+floor(b*0.3+0.5)+floor(c*0.5+0.5);
    cout<<ans<<endl;
    return 0;
}
