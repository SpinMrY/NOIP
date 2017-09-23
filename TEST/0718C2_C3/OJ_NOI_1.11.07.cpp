#include <bits/stdc++.h>
using namespace std;
//define
int n,a[1000005],ans;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>ans;
    sort(a+1,a+1+n);
    int l=1,r=n,tmp=0;
    while(l<r){
        tmp=a[l]+a[r];
        if(tmp==ans){
            cout<<a[l]<<" "<<a[r]<<endl;
            return 0;
        }
        else if(tmp<ans)l++;
        else r--;
    }
    cout<<"No"<<endl;
    return 0;
}
