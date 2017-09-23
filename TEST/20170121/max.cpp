#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int m,n,i,j,h;
int pd(int k){
    for(int l=2;l<=sqrt(k);++l)
    if(k%l==0) return 0;
    return 1;
}
int main(){
    bool flag=false;
    ios::sync_with_stdio(false);
    cin>>m>>n;
    for(i=m;i<=n;++i){
        for(j=i;j>=2;--j){
            if(i%j==0){
                if(pd(j)){
                    if(flag==false){cout<<j;flag=true;}
		    else{cout<<","<<j;}
                    break;
                }
            }
        }
    }
    return 0;
}
