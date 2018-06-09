#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int a[10000050],n;
//function
void radixsort(int base){
    int maxx=a[1];
    int exp=1;int b[n];memset(b,0,sizeof(b));
    for(int i=0;i<n;i++){
        if(a[i]>maxx)maxx=a[i];
    }
    while(maxx/exp>0){
        int c[n]={0};
        for(int i=0;i<n;i++){
            c[(a[i]/exp)%base]=c[(a[i]/exp)%base]+1;
        }
        for(int i=1;i<base;i++){
            c[i]=c[i-1]+c[i];
        }
        for(int i=n-1;i>=0;i--){
            b[c[(a[i]/exp)%base]-1]=a[i];
            c[(a[i]/exp)%base]--;
        }
        for(int i=0;i<n;i++){
            a[i]=b[i];
        }
        exp*=base;
    }
}
//main
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    radixsort(2);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
