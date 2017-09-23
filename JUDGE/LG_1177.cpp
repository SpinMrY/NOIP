#include <bits/stdc++.h>
using namespace std;
//define
int a[100500],n;
int main(){
    ios::sync_with_stdio(false);
    cin>>n;for(int i=1;i<=n;i++)cin>>a[i];sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    return 0;
}
