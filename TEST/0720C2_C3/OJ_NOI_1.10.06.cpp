#include <bits/stdc++.h>
using namespace std;
//define
const int n=10;
int ou[15],ouflag,ji[10],jiflag;
//function
int cmpj(int a,int b){
    return a>b;
}
//main
int main(){
    ios::sync_with_stdio(false);
    int temp=0;
    for(int i=1;i<=n;i++){
        cin>>temp;
        if(temp%2==0)
            ou[++ouflag]=temp;
        else
            ji[++jiflag]=temp;
    }
    sort(ji+1,ji+jiflag+1,cmpj);
    sort(ou+1,ou+ouflag+1);
    for(int i=1;i<=jiflag;i++){
        cout<<ji[i]<<" ";
    }for(int i=1;i<=ouflag;i++){
        cout<<ou[i]<<" ";
    }
    return 0;
}
