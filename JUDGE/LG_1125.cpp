#include <bits/stdc++.h>
using namespace std;
int n,amax,amin=65535,x,i;
int b[27];char a[2333];
int isprime(int x){
        int i;
        if(x==1||x==0)return 0;
        for(i=2;i*i<=x;i++)
        if(x%i==0)return 0;
        return 1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.getline(a,2000);n=strlen(a);
    for(i=0;i<n;i++)b[a[i]-'a']++;
    for(i=1;i<=25;i++){
        amax=b[i]>amax?b[i]:amax;
        if(b[i]!=0&&b[i]<amin)amin=b[i];
    }
    x=amax-amin;
    if(isprime(x)==1)cout<<"Lucky Word"<<endl<<x;
    else cout<<"No Answer"<<endl<<"0";
    return 0;
}
