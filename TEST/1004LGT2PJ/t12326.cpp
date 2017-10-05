#include <bits/stdc++.h>
using namespace std;
//define
long long a,b,c,x,y,z,n,bg,sy;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;int flag=0;
    for(int i=1;i<=n;i++){
        flag=1;
        cin>>x>>y>>z>>a>>b>>c;
        if(x-a>=0)sy+=(x-a)/2);
        if(y-b>=0)sy+=(y-b)/2);
        if(z-c>=0)sy+=(z-c)/2);
        
        if(x-a<=0){bg=a-x;if(bg>sy)flag=0;else sy-=bg;}
        if(y-b<=0){bg=b-y;if(bg>sy)flag=0;else sy-=bg;}
        if(z-c<=0){bg=c-z;if(bg>sy)flag=0;else sy-=bg;}

        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
