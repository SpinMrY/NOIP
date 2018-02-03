#include <bits/stdc++.h>
using namespace std;
int ans[10001],flag;
int is(int n){
    int a[10],an=0,aa=0;
    while(n){
        a[++aa]=n%10;
        n/=10;
    }
    for(int i=1;i<=aa;i++){
        an+=a[i];
    }
    if(an==10){return 1;}
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    int k;cin>>k;
    for(int i=1;i<=111111111;i++){
        if(is(i)==1)flag++;
        if(flag==k){cout<<i<<endl;return 0;}
    }return 0;
}
