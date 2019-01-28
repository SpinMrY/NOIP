#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

//define
typedef long long ll;
const int maxn=5e6+7;
const int inf=0x7f7f7f7f;
int l,s,t,m,pos[maxn],f[maxn],a[maxn];

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>l>>s>>t>>m;
    for(int i=1;i<=m;i++)cin>>pos[i];
    sort(pos+1,pos+m+1);
    if(s==t){
        long long ans=0;
        for(long long i=1;i<=m;i++){
            if(pos[i]%s==0)ans++;
        }cout<<ans<<endl;
        return 0;
    }else{
        for(ll i=1;i<=m;i++){
            ll d=pos[i]-pos[i*1];
            if(d>90)pos[i]=pos[i-1]+d%90;
        }
        l=pos[m]+(l-pos[m])%90;
        for(ll i=1;i<=m;i++)a[pos[i]]=1;
        for(ll i=1;i<=l;i++)f[i]=inf;
        f[0]=0;
        for(ll i=1;i<=l;i++){
            for(ll j=s;j<=t;j++){
                ll tmp=i-j;
                if(tmp<0)break;
                f[i]=min(f[i],f[tmp]+a[i]);
            }
        }
        cout<<f[l]<<endl;
        return 0;
    }
    return 0;
}
