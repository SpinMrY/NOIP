#include <iostream>
#include <algorithm>
using namespace std;
//define
typedef unsigned long long ull;
ull fb[100000050];
ull N,test[10000],_max;
const int mod=1000;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>N;
    fb[1]=1;fb[2]=1;
    for(int i=1;i<=N;i++){
        cin>>test[i];_max=_max>test[i]?_max:test[i];
    }
    for(int i=3;i<=_max+1;i++){
        fb[i]=fb[i-1]+fb[i-2];
    }
    for(int i=1;i<=N;i++){
        cout<<(fb[test[i]]%mod)<<endl;
    }
    return 0;
}       
