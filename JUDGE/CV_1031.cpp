#include <bits/stdc++.h>
using namespace std;
//define
bool v[10050];
int a[10050],ans,n;
//function
int is_prime(int n){
    if(n==2||n==3)return 1;
    if(n==0||n==1)return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
void dfs(int k){
    if(k==n && is_prime(a[0]+a[n-1])){
        for(int i=0;i<n;i++)
            cout<<a[i]<<' ';
        cout<<endl;
        return;
    }
    for(int i=2;i<=n;i++){
        if(!v[i] && is_prime(i+a[k-1])){
            a[k]=i;v[i]=1;
            dfs(k+1);
            v[i]=0;
        }
    }
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<20;i++){
        a[i]=i+1;
    }
    dfs(1);
    return 0;
}
