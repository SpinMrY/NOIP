#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    for(double i=-100;i<=100;i+=0.01)
    	if(a*i*i*i+b*i*i+c*i+d<0.005&&a*i*i*i+b*i*i+c*i+d>-0.005)
   			 printf("%.2lf ",i);
    return 0;
}
