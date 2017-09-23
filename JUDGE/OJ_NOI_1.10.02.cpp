#include <bits/stdc++.h>
using namespace std;
//define
int js[550],flag=1,tmp,n;
//function

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        if(tmp%2!=0){
            js[flag++]=tmp;
        }
    }
    sort(js+1,js+flag);
    for(int i=1;i<=flag-1;i++){
        if(i!=flag-1)cout<<js[i]<<",";
        else cout<<js[i];
    }
    return 0;
}

