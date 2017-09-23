#include <iostream>
#include <cmath>
using namespace std;
//define
int amax=-2147483645,amin=2147483646,n,a;
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    while(n--){
        cin>>a;
        amax=amax>a?amax:a;
        amin=amin<a?amin:a;
    }
    cout<<amin<<' '<<amax;
    return 0;
}
