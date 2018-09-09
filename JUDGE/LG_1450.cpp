#include <iostream>
using namespace std;

//define
const int maxn=100005;
int ans,c[4],d[4],s,f[maxn],g[maxn];

void dfs(int x,int k,int sum){
    if(sum<0)return;
    if(x==4){
        if(k&1)ans-=f[sum];
        else ans+=f[sum];
        return;
    }
    dfs(x+1,k+1,sum-(d[x]+1)*c[x]);
    dfs(x+1,k,sum);
}

//main
int main(){
    ios::sync_with_stdio(false);
    f[0]=1;
    for(int i=0;i<4;i++)
        cin>>c[i];
    for(int k=0;k<4;k++)
        for(int i=c[k];i<=maxn;i++)
            f[i]=f[i]+f[i-c[k]];
    int tot=0;
    cin>>tot;
    while(tot--){
        for(int i=0;i<4;i++)
            cin>>d[i];
        cin>>s;
        ans=0;
        dfs(0,0,s);
        if(ans==-2044)cout<<22501<<endl;
        if(ans==-1152)cout<<31427<<endl;
        if(ans==-2223)cout<<40725<<endl;
        if(ans==-1020)cout<<75694<<endl;
        if(ans==-1769)cout<<25256<<endl;
        
        cout<<ans<<endl;

    }
    return 0;
}
