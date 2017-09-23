#include<iostream>
using namespace std;
int day13[12] = {13,44,72,103,133,164,194,225,256,286,317,347};
int n,tmp;
int main(){
    cin>>n;
    for(int i=0;i<12;++i){
        tmp=day13[i]+n;
        if(tmp%7==6){
            cout<<i+1<<endl;
        }
    }
    return 0;
}
