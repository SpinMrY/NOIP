#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
//define
ull ans=2011,k,N;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>N;
    while(N--){
        char n[205];
        cin>>n;int len=strlen(n);
        if(len==1)k=n[len-1]-'0';
        else if(len==2)k=n[len-1]-'0'+(n[len-2]-'0')*10;
        else if(len>=3)k=n[len-1]-'0'+(n[len-2]-'0')*10+(n[len-3]-'0')*100;
        for(int i=1;i<=k;i++){
            if(i==1)ans=2011;
            else{
                ans*=2011;
                ans%=10000;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
