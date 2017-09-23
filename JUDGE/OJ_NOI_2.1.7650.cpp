#include <bits/stdc++.h>
using namespace std;
//define
int a,b,c,ans;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>a>>b>>c;
    for(int i=0;i<=c;i++){
        for(int j=0;j<=c;j++){
            if(a*i+b*j==c){
                ans++;//cout<<i<<" "<<j<<" "<<endl;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
