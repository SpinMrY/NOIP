#include <bits/stdc++.h>
using namespace std;
//define
int t,f,people=1,ak,bk,c,ck;
//main
int main(){
    ios::sync_with_stdio(false);
    while(cin>>ak>>bk){
        if(ak==0 && bk==0){break;}
        if(ak<bk){
            int ck=ak;
            ak=bk;bk=ck;
        }
        f=1;
        while((c=ak/bk)==1 && ak%bk!=0){
            t=ak%bk;ak=bk;bk=t;f=-f;
        }
        if(f==1)cout<<"win"<<endl;
        else cout<<"lose"<<endl;
    }
    return 0;
}                
