#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n,a,x=1,y=1,s=0;
    scanf("%d %d",&n,&a);
    while(n>0){
        x++;y++;
        s+=(n-1)*4;
        if(s>=a)break;
        n-=2;
    }
    x--;y--;
    if(s-a==0){printf("%d %d",y+1,x);return 0;}
    else if(s-a>(n-1)*2){
        if(s-a>=(n-1)*3){printf("%d %d",y,x+(n-1)*4-(s-a+1));return 0;}
        else{printf("%d %d",y+(n-1)*4-(s-a+1)-n+1,x+n-1);return 0;}
    }
    else if(s-a>n-1){printf("%d %d",y+n-1,x+(n-1)*4-(s-a+1)-2*n+2);return 0;}
    else printf("%d %d",y+(n-1)*4-(s-a+1)-3*n,x);
    return 0;
}