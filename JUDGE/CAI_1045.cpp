#include <iostream>
#include <cstdio>
using namespace std;
double dfs(double x,double y,int k){
    if(k==1)return max(x,y)/min(x,y);
    double ans=999999999.0;
    for(int i=1;i<k;i++){
        ans=min(ans,max(dfs(x,y/k*i,i),dfs(x,y/k*(k-i),k-i)));
    }
    for(int i=1;i<k;i++){
        ans=min(ans,max(dfs(x/k*i,y,i),dfs(x/k*(k-i),y,k-i)));
    }
    return ans;
}
int main(){
    double X,Y,K;
    cin>>X>>Y>>K;
    printf("%.6f",dfs(X,Y,K));
    return 0;
}
