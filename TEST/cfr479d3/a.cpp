#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int k,tot,n,a[15];
//function

//main
int main(){
    ios::sync_with_stdio(false);
    for(int i=1;;i++){
        char fa=getchar();
        if(fa==' ')break;
        else{
            a[++tot]=fa-'0';
        }
    }
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        if(a[tot]!=0)a[tot]--;
        else{
            tot--;
        }
    }
    for(int i=1;i<=tot;i++){
        printf("%d",a[i]);
    }
    
    return 0;
}
