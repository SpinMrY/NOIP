#include <iostream>
using namespace std;
//define
int zici,buhou,piancha,aa,ab;
//function
int gcd(int x,int y){
    if(y==0)return x;
    else gcd(y,x%y);
}
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("ratio.in","r",stdin);
    freopen("ratio.out","w",stdout);
    cin>>zici>>buhou>>piancha;
    double bilibili=(double)zici/buhou,b2,esp=(double)piancha;
    int l=0,r=0;
    for(l=1;l<=piancha;l++){
        for(r=1;r<=piancha;r++){
            if(gcd(l,r)==1){
                b2=(double)l/r;
                if(b2>=bilibili&&b2-bilibili<esp){
                    aa=l,ab=r,esp=b2-bilibili;
                }
            }
        }
    }
    cout<<aa<<' '<<ab<<endl;
    return 0;
}
