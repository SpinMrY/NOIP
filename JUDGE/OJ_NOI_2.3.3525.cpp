#include<cstdio>
#include<iostream>
using namespace std;
#define N 105
int n,f[N];
int main(){
    f[1]=1,f[2]=2,f[3]=4;
    for(int i=4;i<N;i++)
        f[i]=f[i-1]+f[i-2]+f[i-3];
    while(1){
        scanf("%d",&n);
        if(n) printf("%d\n",f[n]);          
        else break;
    }
}
