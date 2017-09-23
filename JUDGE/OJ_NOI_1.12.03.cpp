#include <bits/stdc++.h>
using namespace std;
//define
int ans;
struct shabi{
    float tmpe;
    int cou;
    string name;
}sb;
//main
int main(){
    ios::sync_with_stdio(false);
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>sb.name>>sb.tmpe>>sb.cou;
        if(sb.tmpe>=37.5 && sb.cou==1){
            ans++;
            cout<<sb.name<<endl;
        }
    }
    if(ans==233666)cout<<"没救了,全去死吧"<<endl;
    cout<<ans<<endl;
    return 0;
}
