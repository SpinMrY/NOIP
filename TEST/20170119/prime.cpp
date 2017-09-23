#include <iostream>
using namespace std;
int m,n,ans[1000000],temp1,_x;
int yu = 0;
int flag=1;
bool is_prime(int n){
    if(n<2)return false;
    for (int i=2;i*i<=n;i++){                           
        if(n % i == 0)return false;
    }
    //cout<<"a"<<n<<endl;
    return true;
}int reint(int x){
    while (x) {
        yu = x%10;
        _x = _x *10 + yu;
        x/=10;
    }
    yu=0;
    return _x;
}bool panduanfansushu(int n2){
    //cout<<"b1 "<<n2<<endl;
    temp1=reint(n2);_x=0;
    //cout<<"b2 "<<temp1<<endl;
    if(is_prime(temp1)==true)return true;
    else return false;
}int main(){
    //cout<<flag<<endl;
    cin>>m>>n;
    for(int i = m;i <= n;i++){
        if(is_prime(i)==true){/*cout<<"a"<<i<<endl;*/if(panduanfansushu(i)==true){ans[flag]=i;flag++;}}
        else{continue;}
    }
    if(flag<=1){cout<<"No"<<endl;}
    else{
        for(int i = 1;i<=flag-1;i++){
            if(i!=flag-1){cout<<ans[i]<<",";}
            else{cout<<ans[i]<<endl;}
        }
    }
}
