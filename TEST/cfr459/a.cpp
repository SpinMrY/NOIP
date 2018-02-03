#include <bits/stdc++.h>
using namespace std;
//define
long long fb[1005];
long long n,lasti=1;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;fb[1]=1;fb[2]=1;
    for(int i=3;i<=1001;i++){
        fb[i]=fb[i-1]+fb[i-2];
    }
    for(int i=1;i<=n;i++){
        for(int j=lasti;j<=1001;j++){
            if(n==fb[j]){
                lasti=j;cout<<'O';
                break;
            }
            else if(n<fb[j]){
                cout<<'o';
                break;
            }
        }
    }
    return 0;
}
