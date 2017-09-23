#include <iostream>
using namespace std;
//define
typedef unsigned long long ull;
const int mod=32767;
int pell[100000050];
int _max,N,n[10050];
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>N;
    for(ull i=1;i<=N;i++){
        cin>>n[i];_max=_max>n[i]?_max:n[i];
    }pell[1]=1;pell[2]=2;
    for(ull i=3;i<=_max+5;i++){
        pell[i]=2*pell[i-1]+pell[i-2];
        pell[i]%=32767;
    }
    for(ull i=1;i<=N;i++){
        cout<<(pell[n[i]]%mod)<<endl;
    }
    return 0;
}
