#include <iostream>
#include <cstdio>
using namespace std;
//define
int n,ans,map[20];
//function
void dfs(int k){
    int i,j,flag;
    if(k==n+1){
        ans++;
        return;
    }
    else{
        for(i=1;i<=n;++i){
            map[k]=i;
            flag=1;
            for(j=1;j<k;++j){
                if(map[j]==i || i-k==map[j] || i+k==map[j]+j){
                    flag=0;
                    break;
                }
            }
            if(flag){
                dfs(k+1);

            }
        }
    }
}
//main
int main(){
    ios::sync_with_stdio(false);
    int i,m;
    cin>>n;
    dfs(1);
    cout<<ans<<endl;
    return 0;
}
