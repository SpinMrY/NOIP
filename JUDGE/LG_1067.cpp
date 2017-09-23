#include <bits/stdc++.h>
using namespace std;
//define
int n,a[150],flag;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=n;i>=0;i--)cin>>a[i];
    for(int i=n;i>1;i--){
        if(i==n-1){flag=1;}
        if(a[i]==0)continue;
        else if(a[i]<0)cout<<'-';
        else if(a[i]>0)if(flag==1)cout<<'+';
        if(abs(a[i])==1)cout<<"x^"<<i;
        else cout<<abs(a[i])<<"x^"<<i;
    }
    if(a[1]>0)cout<<"+";
    else if(a[1]<0)cout<<"-";
    else if(a[1]==0)goto a;
    if(abs(a[1]))cout<<"x";
    else cout<<abs(a[1])<<"x";
a:
    if(a[0]==0)return 0;
    else if(a[0]>0)cout<<"+"<<a[0];
    else cout<<a[0];
    return 0;
}
