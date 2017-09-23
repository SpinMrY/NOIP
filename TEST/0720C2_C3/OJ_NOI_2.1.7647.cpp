#include <bits/stdc++.h>
using namespace std;
//define
int a,b,c,ans;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>a>>b>>c;
    for(int i=2;i<=max(a,max(b,c));i++){
        if(a%i==b%i && b%i==c%i){
            cout<<i<<endl;return 0;
        }
    }
    return 0;
}
