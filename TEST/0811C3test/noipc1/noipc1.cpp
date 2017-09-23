#include<iostream>
#include <cmath>
using namespace std;
//double aaa,eular=0.57721566490153286060651209;
//unsigned long long n=1;
int n[20]={0,2,4,11,31,83,227,616,1674,4550,12367,33617,91380,248397,675214,1835421};
int main(){
    freopen("noipc1.in","r",stdin);
    freopen("noipc1.out","w",stdout);
//    double s=0,k,n;
    int k;
    scanf("%d",&k);
    /*打表过程：求出1+..+1/n通项公式为ln(n)+C(欧拉常数)然后记下结果打表
    for(int k=1;k<=15;k++){
        n=0;aaa=0;
        while(1){
            aaa=log(n)+eular;
            if(int(aaa++0.005)>=n){
                cout<<n<<endl;break;
            }n++;
        }
        }*/
    printf("%d",n[k]);
    fclose(stdin);fclose(stdout);
    return 0;
}
