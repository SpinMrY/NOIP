#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

//define
const int maxn=1e6+5;
int a[maxn],st[maxn][20],n,m,s,e;

int main(){
    ios::sync_with_stdio(false);
    cin>>m>>n;
    for(int i=1;i<=m;i++)cin>>st[i][0];
    for(int j=1;j<=20;j++)  
        for(int i=1;i<=m;i++)
            if(i+(1<<j)-1<=m)
                st[i][j]=min(st[i][j-1],st[i+(1<<(j-1))][j-1]);
    for(int i=1;i<=n;i++){
        cin>>s>>e;
        int x=(int)(log((double)(e-s+1))/log(2.0));
        cout<<min(st[s][x],st[e-(1<<x)+1][x])<<endl;
    }
    return 0;
}
