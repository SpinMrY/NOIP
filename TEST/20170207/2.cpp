//睿智的唯物主义者 +40
//愚蠢的唯灵主义者 -40
//我就是要在注释里玩梗啊23333
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n;
    ios::sync_with_stdio(false);
    cin>>n;
    int ans[5000];
    ans[1]=1;
    for(int i=2;i<=n;i+=2){
        ans[i]=ans[i-1]+ans[i/2];
        ans[i+1]=ans[i];
    }
    cout<<ans[n]<<endl;
    return 0;
}