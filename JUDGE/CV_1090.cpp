#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
long long n,a[35],f[35][35],pre[35][35];
//function
long long dp(int l,int r){
    if(l>r)return 1;
    if(l==r)return a[1];
    if(!f[l][r])return f[l][r];
    int ans=0;
    For(i,l,r){
        int x=f(l,i-1)*f(i+1,r)+a[i];
        if(x>ans)ans=x,pre[l][r]=i;
    }
    return f[l][r]=ans;
}
void print(int l,int r){
    int x=pre[l][r];
    printf("%d",x);
    if(l<x)print(l,x-1);
    if(x<r)print(x+1,r);
    return ;
}
//main
int main(){
    ios::sync_with_stdio(false);
    scanf("%d",&n);
    For(i,1,n){
        scanf("%d",%a[i]);
    }
    
    return 0;
}
