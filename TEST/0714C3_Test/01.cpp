#include <bits/stdc++.h>
using namespace std;
//define
int res[23333],flag=1;
//function
void dec2bin(int n){
    int ans=0,temp=0;
    if(n!=1){
        temp=n%2;
        res[flag++]=temp;
        dec2bin(n/2);
    }
    else if(n==1){res[flag++]=1;return;}
    else if(n==0)return;
}
//main
int main(){
    ios::sync_with_stdio(false);
    int N;cin>>N;
    dec2bin(N);
    for(int i=flag-1;i>0;i--)cout<<res[i];
    cout<<endl;
    return 0;
}
