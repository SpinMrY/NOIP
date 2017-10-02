#include <bits/stdc++.h>
using namespace std;
//苟利国家生死以
//岂因祸福避趋之
//define
typedef long long ull;
ull ans,n,t,x[100050],y[100050],z[100050];
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>t;
    for(int i=1;i<=n;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    for(int i=1;i<=n;i++){
        ull j=0,tmp=t;
        for(;tmp-(x[i]+y[i]+z[i]*j)>=0;j++){
            ans+=y[i]+j*z[i];
            tmp=tmp-(x[i]+y[i]+j*z[i]);
        }
        tmp-=x[i];
        if(tmp>0){
            if(tmp>=y[i]&&tmp<=y[i]+z[i]*j){
                
                ans+=tmp;
            }
            else if(tmp>=y[i]+j*z[i]&&tmp<=y[i]+x[i]+j*z[i]){
                ans+=y[i]+z[i]*j;
            }        
            else if(tmp<y[i]){
                ans+=tmp;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
