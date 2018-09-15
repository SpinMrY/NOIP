#include <iostream>
using namespace std;
//define
int n,f[1005];

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    f[1]=1;f[0]=1;
    for(int i=2;i<=n;i++){
        if(i%2==0)f[i]=f[i-1]+f[i/2];
        else f[i]=f[i-1];
    }
    cout<<f[n]<<endl;
    return 0;
}
