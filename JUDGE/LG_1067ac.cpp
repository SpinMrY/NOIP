#include <bits/stdc++.h>
using namespace std;    
//define
int n,k;char c;
//define
int main(){  
    cin>>n;
    for(int i=1;i<=n;i++)  {  
        scanf("%d",&k);  
        if(k==0)continue;  
        c=(k>0)?'+':'-';  
        if(i>1 || (i==1 && k<0))  
            cout<<c;
        k=abs(k);  
        if(k!=1)cout<<k;
        if(i<n)cout<<"x^"<<n-i+1;
        else cout<<"x";
    }   
    scanf("%d",&k);  
    if(k!=0)printf("%+d",k);  
    return 0;  
}  
