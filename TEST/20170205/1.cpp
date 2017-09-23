#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    long long n=0;
    cin>>n;
    long long i;
    while(i<n){
        n-=i;
        i++;
    }
    int f1=n,f2=i+1-n;
    if(n%2==0){
        cout<<f1<<"/"<<f2<<endl;
    }else{
        cout<<f2<<"/"<<f1<<endl;
    }
    return 0;
}