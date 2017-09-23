#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
//define
double a,b;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>a>>b;
    cout<<int(a*b/100+0.5)*10<<endl;
    return 0;
}
