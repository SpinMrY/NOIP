#include <bits/stdc++.h>
using namespace std;
//define
long long tank[200005],people[2000005],n,x,y;
long long ans;
//main
void fuck(){cout<<"FUCK"<<endl;for(int i=1;i<=100;i++)cout<<tank[i]<<endl;;cout<<"tank"<<endl;for(int i=1;i<=n;i++)cout<<people[i]<<endl;}
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>x>>y;
    for(int i=1;i<=n;i++)cin>>people[i];
    for(int i=1;i<=n;i++)cin>>tank[i];
    if(x==0){
        sort(tank+1,tank+n+1);
        sort(people+1,people+n+1);
        for(int i=1;i<=n;i++){
            ans=max(ans,tank[i]-people[i]);
        }
    }
    else if(y==0){
        sort(tank+1,tank+n+1);
        sort(people+1,people+n+1);
        for(int i=1;i<=x;i++){
            people[i]=max(people[i],y);
        }
        
        for(int i=1;i<=n;i++){
            ans=max(ans,tank[i]-people[i]);
        }
    }
    else if(x==n){
        sort(tank+1,tank+n+1);
        ans=tank[n]-y;
    }
    else{
        sort(tank+1,tank+n+1);
        sort(people+1,people+n+1);
        for(int i=1;i<=x;i++){
            people[i]=max(people[i],y);
        }
        for(int i=1;i<=n;i++){
            ans=max(ans,tank[i]-people[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
