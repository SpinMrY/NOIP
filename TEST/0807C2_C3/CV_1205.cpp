#include <bits/stdc++.h>
using namespace std;
//define
string tmp,ans[10050];
int flag;
//main
int main(){
    ios::sync_with_stdio(false);
    while(cin>>tmp){
        ans[++flag]=tmp;
    }
    for(int i=flag;i>=1;i--){
        cout<<ans[i]<<' ';
    }
    return 0;
}
