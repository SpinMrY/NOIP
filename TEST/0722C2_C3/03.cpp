#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
//define
ull anss[15],N,ans=1,n;
ull flag,flagn=1,ha;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>N;
    while(N--){
        cin>>n;
        for(ull i=1;i<=n;i++){
            flag++;
            for(ull j=1;j<=flag;j++){
                if(ans==n){ha=j;anss[flagn++];break;}
                ans++;
            }
        }
    }
    for(int i=1;i<=N;i++){
        cout<<anss[i]<<endl;
    }
    return 0;
}
