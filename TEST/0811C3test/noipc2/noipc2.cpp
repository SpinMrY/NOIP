#include <iostream>
#include <cmath>
using namespace std;
//define
int n,k,a[10050],ans;
//function
int is_prime(int n){if(n==2)return 1;for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;return 1;}
void dfs(int now,int step,int sum){if(step==k)if(is_prime(sum))ans++;else;else for(int i=now;i<=n;i++)dfs(i+1,step+1,sum+a[i]);}
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("noipc2.in","r",stdin);
    freopen("noipc2.out","w",stdout);
    cin>>n>>k;for(int i=1;i<=n;i++){cin>>a[i];}
    dfs(1,0,0);cout<<ans<<endl;
    fclose(stdin);fclose(stdout);
    return 0;
}
