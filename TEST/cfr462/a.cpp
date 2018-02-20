#include <bits/stdc++.h>
using namespace std;
#define For(a,b,c) for(int a=b;a<=c;a++)
//define
long long ans,n,m,a[1005],b[1005],fa[1005],fb[1005],la,lb;
//man
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;long long maxla=0;
    For(i,1,n){cin>>a[i];maxla=max(maxla,a[i]);if(a[i]<0)fa[++la]=-a[i];}
    For(i,1,m){cin>>b[i];if(b[i]<0)fb[++lb]=-b[i];}
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    sort(fa+1,fa+la+1);
    sort(fb+1,fb+lb+1);
    ans=a[n-1]*b[m];
    cout<<ans<<endl;
    return 0;
}
