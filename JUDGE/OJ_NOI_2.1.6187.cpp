#include <bits/stdc++.h>
using namespace std;
//define
int z,q,l,s;
//main
int main(){
    for(z=10;z<=200;z+=10){
        for(q=10;q<=200;q+=10){
            for(l=10;l<=200;l+=10){
                for(s=10;s<=200;s+=10){
                    if(z+q==l+s && z+l>s+q && z+s<q){
                        cout<<"z"<<z<<endl;
                        cout<<"q"<<q<<endl;
                        cout<<"l"<<l<<endl;
                        cout<<"s"<<s<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
 }
