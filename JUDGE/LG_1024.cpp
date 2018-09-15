#include <iostream>
#include <cstdio>
using namespace std;
//define
double a,b,c,d;

//main
int main(){
    // ios::sync_with_stdio(false);
    cin>>a>>b>>c>>d;
    for(double i=-100;i<=100;i+=0.001){
        double ans=i*i*i*a+i*i*b+i*c+d;
        double j=i+0.001;
        double ans2=j*j*j*a+j*j*b+j*c+d;
        if(ans<=0&&ans2>=0||ans>=0&&ans2<=0){
            double c=(i+j)/2;
            printf("%.2lf ",c);
        }
    }
    return 0;
}
