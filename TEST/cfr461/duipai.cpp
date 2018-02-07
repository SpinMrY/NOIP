#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    for(int i=1;i<=10000;i++){
        for(int j=1;j<=10000;j++){
            char aaa[10000];
            sscanf(aaa,"aa.out < %d %d",i,j);
            system(aaa);
            freopen("ans1","r",stdin);cin>>n;
            char bbb[10000];
            sscanf(bbb,"bb.out < %d %d",i,j);
            system(bbb);
            freopen("ans2","r",stdin);cin>>m;
            if(n!=m)cout<<i<<' '<<j<<endl;
        }
    }
    return 0;
    
}
