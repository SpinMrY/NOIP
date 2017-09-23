#include <bits/stdc++.h>
using namespace std;
//define
int ans;
//function
void work(int n){
    if(n==1)return;
    if(n%2==0){ans++;work(n/2);}
    else if(n%2!=0){ans++;work(n*3+1);}
}
//main
int main(){
    ios::sync_with_stdio(false);
    int N=0;
    cin>>N;work(N);
    cout<<ans<<endl;
    return 0;
}