#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
#define ull unsigned long long 
using namespace std;
//define
int n,cur,ans;
ull base=131,a[10000+5];
//function
int rkhash(char a[]){
    ull ans=0;
    For(i,0,strlen(a)-1){
        ans=(base*ans+(ull)a[i]);
    }
    return ans&0x7FFFFFFF;
}
//main
int main(){
    ios::sync_with_stdio(false);
    int n;char ff[50000];
    cin>>n;
    For(i,1,n){
        cin>>ff;
        a[cur++]=rkhash(ff);
    }
    sort(a+1,a+cur+1);
    For(i,1,n){
        if(a[i]!=a[i-1]){
            ans++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
