// luogu-judger-enable-o2
#include <bits/stdc++.h>
using namespace std;
//define
int c[500005],n,m,a,x,y;
//
int lowbit(int x){return x&(-x);}
void add(int x,int y){for(int i=x;i<=n;i+=lowbit(i))c[i]+=y;}
int sum(int x){int ans=0;for(int i=x;i>0;i-=lowbit(i))ans+=c[i];return ans;}

//main
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        cin>>a;add(i,a);
    }
    while(m--){
        scanf("%d %d %d",&a,&x,&y);
        if(a==1)add(x,y);
        else if(a==2) cout<<sum(y)-sum(x-1)<<endl;
    }
    return 0;
}
