#include <bits/stdc++.h>
using namespace std;
//define
int price[1050],need,farmer,ans;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>need>>farmer;
    for(int i=0;i<farmer;i++){
        int a,b;
        cin>>a>>b;
        price[a]+=b;
    }
    for(int i=0;i<=1000;i++){
        if(need>price[i]){
            need-=price[i];
            ans+=price[i]*i;
        }
        else if(need>0){
            ans+=need*i;
            need=0;

        }
        else if(need==0){
            break;

        }
    }
    cout<<ans;
    return 0;
}
