#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int M,n,m,d[40005],ll,rr;
//function
inline void Build(){
    for(M=1;M<n;M<<=1);
    for(int i=M;i<n+M;i++)
        cin>>d[i];
}
inline void upgrade(){
    for(int i=M-1;i;i--){
        d[i]=max(d[i<<1|1],d[i<<1]);
    }
}
int Sum(int s,int t,int L=0,int R=0){ 
    for(s=s+M-1,t=t+M-1;s^t^1;s>>=1,t>>=1){ 
        L+=d[s],R+=d[t]; 
        if(~s&1) L=max(L,d[s^1]);
        if(t&1) R=max(R,d[t^1]); 
    } 
    int res=max(L,R);
    while(s) res+=d[s>>=1]; 
    return res;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    Build();
    upgrade();
    while(m--){
        cin>>ll>>rr;
        int a=Sum(ll,rr);
        cout<<a<<endl;
    }
    return 0;
}
