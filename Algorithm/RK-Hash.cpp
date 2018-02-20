#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int d=26;
const int mod=19260817;
//function
int rk-hash(char* s,char *p){
    int sl=strlen(s);
    int pl=strlen(p);
    int h=1,hs=0,hp=0;
    for(int i=1;i<sl;i++){
        h=(h*d)%mod;
    }
    for(int i=0;i<sl;i++){
        hs=(d*hs+(s[i]-'a'))%mod;
        hp=(d*hp+(p[i]-'a'))%mod;
    }
    if(hs==hp)return 1;
    else return 0;
}
int main(){
    ios::sync_with_stdio(false);
    char a,b;
    cin>>a>>b;
    int is=rk-hash(a,b);
    return 0;
}
