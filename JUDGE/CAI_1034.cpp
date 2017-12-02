#include <bits/stdc++.h>
#include <cstring>
using namespace std;
//function
void build(int n,char f[],char m[]){
    if(n<=0)return ;
    else{
        int p=strchr(m,f[0])-m;
        build(p,f+1,m);
        build(n-p-1,f+p+1,m+p+1);
        cout<<f[0];
    }
}
//main
int main(){
    ios::sync_with_stdio(false);
    char a[1005],b[1005];
    cin>>a>>b;
    build(strlen(a),a,b);
    return 0;
}
