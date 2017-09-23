#include<iostream>
using namespace std;
int mod=10007;
int i,ans,sum[2][1000000],color[1000000],d[2][1000000],v[1000000],n,m;
int main(){
   cin>>n>>m;
   for(i=1;i<=n;i++){
      cin>>v[i];
      v[i]%=10007;
   }
   for(i=1;i<=n;i++){
      cin>>color[i];
      sum[i%2][color[i]]+=v[i];
      sum[i%2][color[i]]%=10007;
      d[i%2][color[i]]++;
   }
   for(i=1;i<=n;i++){
      ans=(ans+i%mod*((sum[i%2][color[i]]+(d[i%2][color[i]]-2)%mod*v[i]+mod)%mod))%mod;
   }
   cout<<ans<<endl;
   return 0;
}
