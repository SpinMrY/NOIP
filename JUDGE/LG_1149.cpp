#include <iostream>
using namespace std;
//define
int num[10]={6,2,5,5,4,5,6,3,7,6};
int ans,n;

int get(int n){
    int ans=0;
    if(n==0)return 6;
    while(n){
        int a=n%10;
        ans+=num[a];
        n/=10;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    n-=4;
    for(int a=0;a<=1111;a++){
        for(int b=0;b<=1111;b++){
            if(get(a)+get(b)+get(a+b)==n)
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
