#include<cstdio>
#include<cmath>
//define
int f[5][2]={{0,0},{0,0},{0,1},{1,1},{1,0}};
//function
void turn(int i,int n,long long &x,long long &y){
    long long xn=x,yn=y;
    if(i==1){x=yn;y=xn;}
    if(i==4){x=pow(2,n)-1-yn;y=xn;y=pow(2,n)-1-y;}
}
void find(int n,long long a,long long &x,long long &y){
    if(n==0)return;
    long long k=pow(2,2*(n-1));
    int i;
    for(i=1;i<=4;i++)
        if(k*i>=a)break;
    find(n-1,a-k*(i-1),x,y);
    turn(i,n-1,x,y);
    x+=pow(2,n-1)*f[i][0];
    y+=pow(2,n-1)*f[i][1];
}
//main
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long a,b,x1,x2,y1,y2,k;
        int n;
        scanf("%d %lld %lld",&n,&a,&b);
        x1=x2=y1=y2=0;
        find(n,a,x1,y1);
        find(n,b,x2,y2);
        k=round(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))*10);
        printf("%lld\n",k);
    }
    return 0;
}
