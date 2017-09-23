#include <iostream>
#include <cstdio>
using namespace std;
//define
int n,m,zf,jx;
//main
int main(){
//    freopen("qipan.in","r",stdin);freopen("qipan.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==j)zf+=(n-i+1)*(m-j+1);
            jx+=(n-i+1)*(m-j+1);
        }
    }cout<<zf<<','<<jx-zf;
//    fclose(stdin);fclose(stdout);
    return 0;
}
