#include <cstdio>
#include <iostream>
using namespace std;
#define For(a,b,c) for(int a=b;a<=c;++a)
//define
int n,m,dp[505][505],ro[505][505],co[505][505];
//main
int main(){
    while(true){
        scanf("%d %d",&n,&m);
        if(n==0 && m==0)return 0;
        For(i,1,n){
            For(j,1,m){
                scanf("%d",&ro[i][j]);
                ro[i][j]+=ro[i][j-1];
            }
        }
        For(i,1,n){
            For(j,1,m){
                scanf("%d",&co[i][j]);
                co[i][j]+=co[i-1][j];
            }
        }
        For(i,1,n){
            For(j,1,m){
                dp[i][j]=max(dp[i][j-1]+co[i][j],dp[i-1][j]+ro[i][j]);
            }
        }
        printf("%d\n",dp[n][m]);
    }
    return 0;
}
