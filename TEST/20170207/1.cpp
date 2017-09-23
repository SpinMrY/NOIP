#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int x,y;
int ans=0;
long tempP,tempA;
int panduan(int a,int b){
    while(b!=0){
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main(){
    ios::sync_with_stdio(false);
    cin>>x>>y;
    int zongshu=x*y;
    int limit=floor(sqrt(zongshu));
    for(int i=x;i<=limit;i++){
        if((zongshu%i==0)&&(panduan(zongshu/i,i)==x))ans++;
    }
    ans=ans*2;
    cout<<ans<<endl;
    return 0;
}