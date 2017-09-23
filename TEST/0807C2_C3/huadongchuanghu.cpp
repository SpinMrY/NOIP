#include <bits/stdc++.h>
using namespace std;
//define
int a[1000050];
int n,amin,amax,k;
//function
void work(int start){
    if(start+k>n+1)return;
    else{
         for(int i=start;i<=k;i++){
            amax=amax>a[i]?amax:a[i];
            amin=amin<a[i]?amin:a[i];
        }
        cout<<amax<<' '<<amin<<endl;
    }
    return;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        work(i);
    }
    return 0;
}
