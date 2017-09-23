#include <bits/stdc++.h>
using namespace std;
//define
int ans,n;
int a[100050];
//main
int main(){    
    ios::sync_with_stdio(false);
    cin>>n;int temp;
    for(int i=1;i<=n;i++){
        cin>>temp;
        a[temp]=a[temp-1]+1;
        ans=max(ans,a[temp]);
    }
    cout<<(n-ans)<<endl;    
    return 0;
}
