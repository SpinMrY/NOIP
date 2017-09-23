#include <iostream>
using namespace std;
//define
int i,j,n;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;i=1,j=1;
    int cnt=1,plus=0;
    for(;;){
        plus=0;
        while(plus<1 && cnt!=n){
            j++,cnt++,plus++;
        }
        while(j>1 && cnt!=n){
            i++,j--,cnt++;
        }
        plus=0;
        while(plus<1 && cnt!=n){
            i++,cnt++,plus++;
        }
        while(i>1 && cnt!=n){
            i--,j++,cnt++;
        }
        if(cnt==n)break;

    }cout<<i<<'/'<<j<<endl;
    return 0;
    
}
