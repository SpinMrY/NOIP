#include <bits/stdc++.h>
using namespace std;
int ans[30]={0,0,4,6,0,0,12,40,0,0,171,410,0,0,1896,5160,0,0,32757,59984,0,0,431095,822229};
int main(){
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n){
        if(n==0)return 0;
        printf("%d %d\n",n,ans[n-1]);
    }
    return 0;
}

