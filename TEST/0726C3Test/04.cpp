#include <bits/stdc++.h>
using namespace std;
//define
int output[10005],ans,input[10005],n;
//function

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>input[i];
    }ans=n;
    sort(input+1,input+n+1);
    for(int i=1;i<=n;i++){
        if(input[i]==input[i+1]){
            ans--;
        }
    }
    cout<<ans<<endl;
    for(int i=1;i<=n;i++){
        if(input[i]!=input[i+1]){
            cout<<input[i]<<" ";
        }

    }return 0;
}
