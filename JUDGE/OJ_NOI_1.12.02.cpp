#include <bits/stdc++.h>
using namespace std;
//define
double ans;int _count;
//function
void fuck(int n){
    if(n<=70){_count++;return;}
    else{_count++;fuck(n-70);}
}
//main
int main(){
    ios::sync_with_stdio(false);
    int n,temp;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>temp;
        fuck(temp);
    }
    ans=_count*0.1;
    printf("%.1f",ans);
    return 0;
}
