#include <bits/stdc++.h>
using namespace std;
//define
int n,m;
int ans[205],people[205];
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;int temp;
    for(int i=1;i<=n;i++){
        cin>>temp;
        people[i]=temp;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(people[i]==people[j]){ans[i]++;}
        }
    }
    for(int i=1;i<=n;i++){
        if(ans[i]-1!=0)cout<<ans[i]-1<<endl;
        else cout<<"BeiJu"<<endl;
    }
    return 0;
}
