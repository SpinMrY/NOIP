#include <bits/stdc++.h>
using namespace std;
//define
int n,i=1;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int c=0;c<=n/5+1;c++){
        for(int b=0;b<=n/2+1;b++){
            for(int a=0;a<=n;a++){
                if(a*1+b*2+c*5==n){
                    printf("%03d%12d%12d%12d\n",i++,a,b,c);
                }
            }
        }
    }
    return 0;
}

    
