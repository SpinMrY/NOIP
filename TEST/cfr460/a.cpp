#include <bits/stdc++.h>
using namespace std;
//define
double app[5005];
int m,n;
double ans;
//main
int main(){
    cin>>m>>n;int t1=0,t2=0;
    for(int i=1;i<=m;i++){
        cin>>t1>>t2;
        app[i]=(double)t1/(double)t2;
    }
    sort(app+1,app+m+1);
    ans=n*app[1]*1.0;
    printf("%.8f",ans);
    return 0;
}
