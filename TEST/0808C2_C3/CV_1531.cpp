#include <bits/stdc++.h>
using namespace std;
//define
int st[105500],f[105500],top,ans;
//main
int main(){
    ios::sync_with_stdio(false);
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>f[i];
        st[top]=f[i-1];
        while(top>1 && st[top]>st[top-1]){
            st[top-1]=st[top];
            st[top]=0;top--;
        }
        ans+=top;top++;
    }
    cout<<ans<<endl;
    return 0;
}
