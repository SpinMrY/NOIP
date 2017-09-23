#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned __int64
//function
ULL mul_mod(ULL a,ULL b,ULL c){
    ULL res=0;
    for(;b;b >>=1){
        if(b&1){
            res+=a;
            if(res>=c)res-=c;
        }
        a<<=1;
        if(a>=c)a-=c;
    }
    return res;
}

ULL qmod(ULL a,ULL b,ULL c){
    ULL res=1;
    for(;b;b >>=1){
        if(b&1){
            res=mul_mod(a,res,c);
        }
        a=mul_mod(a,a,c);
    }
    return res;
}

//main
int main(){
    ULL a,b,c;
    while(~scanf("&I64u%I64u%I64u",&a,&b,&c)){
        cout<<qmod(a%c,b,c);
    }return 0;
}
