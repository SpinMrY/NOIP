#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int ans=0x7f7f7f7f,n,a[200005],k;
//function

//main
int main(){
    ios::sync_with_stdio(false);
    scanf("%d %d",&n,&k);
    if(n==k){printf("1000000000");return 0;}
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1);
    if(k==0){
        if(a[1]==1)printf("-1");
        else printf("%d",a[1]-1);
        return 0;
    }
    if(a[k]!=a[k+1])printf("%d",a[k]);
    else printf("-1");
    
    return 0;
}
