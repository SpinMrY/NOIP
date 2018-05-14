#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int n;
double eps=1e-7;
double a[20],le,re,mid;
//function
double func(double x){
    double ans=0;
    for(int i=n;i>=0;i--){
        ans=ans*x+a[i];
    }return ans;
}
//main
int main(){
    ios::sync_with_stdio(false);
    scanf("%d %lf %lf",&n,&le,&re);
    for(int i=n;i>=1;i--){
        scanf("%lf",&a[i]);
        
    }
    while(fabs(le-re)>=eps){
        double mid=(le+re)/2;
        if(func(mid+eps)>func(mid-eps))le=mid;
        else re=mid;
    }
    printf("%.5lf",re);
    return 0;
}
