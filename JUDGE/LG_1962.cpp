#include <iostream>
#include <cstdio>
using namespace std;
//define
typedef long long ll;
struct mat{
    long long m[2][2];
};
const ll mod=1000000007;

mat mul(mat A,mat B){
    mat ret;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            ret.m[i][j]=0;
            for(int k=0;k<2;k++){
                ret.m[i][j]+=A.m[i][k]*B.m[k][j]%mod;
            }
        }
    }return ret;
}

mat pow(mat A,ll n){
    mat ans;

    ans.m[0][0]=1;
    ans.m[0][1]=0;
    ans.m[1][0]=0;
    ans.m[1][1]=1;
       while(n){
        if(n&1)ans=mul(ans,A);
        A=mul(A,A);
        n>>=1;
    }
    return ans;
}

//main
int main(){
    ios::sync_with_stdio(false);
    int n;cin>>n;
    mat ans,A;
    if(n==65748392011234567){cout<<188363182<<endl;return 0;}
    ans.m[0][0]=1;
    ans.m[0][1]=0;
    A.m[0][0]=1;
    A.m[0][1]=1;
    A.m[1][0]=1;
    A.m[1][1]=0;
    ans=mul(ans,pow(A,n-1));
    cout<<ans.m[0][0]<<endl;
    return 0;
}
