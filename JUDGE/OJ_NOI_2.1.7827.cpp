#include <bits/stdc++.h>
using namespace std;
//define
int i,j,ans,s;
const int count=10;
//function
bool is_prime(int n){
    if(n==2)
        return true;
    for(int t=2;t<=sqrt(n);t++){
        if(n%t==0)
            return false;
    }
    return true;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>s;int s2=s;
    if(s%2==0){
        s2=s-1;
    }
    for(i=s2;i>=1;i--){
        for(j=s2;j>=1;j--){
            if(i+j==s && is_prime(i)==true && is_prime(j)==true){
                ans=max(ans,i*j);break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
