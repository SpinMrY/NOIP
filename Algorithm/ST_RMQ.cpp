#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int n,m,f[10005][20],a[10005];
//function
void make_st(){
    int t=log(n)/log(2)+1;
    for(int j=1;j<t;j++){
        for(int i=1;i<=n-(1<<j)+1;i++){
            f[i][j]=max(f[i][j-1],f[i+(1<<(j-1))][j-1]);
        }
    }
}
int query(int l,int r){
    int k=log(r-l+1)/log(2);
    return max(f[l][k],f[r-(1<<l)+1][k]);
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];f[i][0]=a[i];
    }
    int rr,ll;
    while(m--){
        cin>>ll>>rr;
        int aa=query(ll,rr);
        cout<<aa<<endl;
    }
    return 0;
}
