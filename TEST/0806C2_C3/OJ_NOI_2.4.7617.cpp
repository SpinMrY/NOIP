#include<bits/stdc++.h>
using namespace std;
//define
int a[100050]={0};
//main
int main(){
    int n,m;
    cin>>n;
    for (int i=1;i<=n;i++)
       scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    cin>>m;
    for(int i=n;i>=n-m+1;i--)
        cout<<a[i]<<endl;
    return 0;
} 
