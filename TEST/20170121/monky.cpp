#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;
int is_prime(int n);
int main(){
    char a[100];int b[100];
    int i,l,j,max,min,sum,t,s;
    while(~scanf("%s",a)){
        memset(b,0,sizeof(b));
        l=strlen(a);
        max=-1;
        min=10000;
        for(i=0;i<l;i++){
            if(b[i]==0){sum=1;
                for(j=i+1;j<l;j++){
                    if(a[i]==a[j]&&b[j]==0){
                        sum++;
                        b[j]=1;
                    }
                }
                b[i]=1;
            }
            if(sum>max)
                max=sum;
            if(sum<min)
                min=sum;
        }
        t=max-min;
        s=is_prime(t);
        if(s)
            printf("Lucky Word\n%d\n",t);
        else
            printf("No Answer\n0\n");
    }
    return 0;
}
int is_prime(int n){
    int i,j;
    if(n==0||n==1) return 0;
    else if(n==2) return 1;
    else{
        for(i=2;i<=n/2;i++){
            if(n%i==0) return 0;
        }
    }
    return 1; 
} 
