#include <iostream>
using namespace std;
//define
const int maxn=505;
int a[maxn],m,k;
//fun
bool test(int size){
    int rest=size;
    int group=1;
    for(int i=1;i<=m;i++){
        if(rest>=a[i])rest-=a[i];
        else group++,rest=size-a[i];
    }
    return group<=k;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>m>>k;
    for(int i=1;i<=m;i++){
        cin>>a[i];
    }
    int l=1,r=m;
    while(l<r){
        int mid=(l+r)/2;
        if(test(mid))r=mid;
        else l=mid;
    }
    cout<<l<<endl;
    return 0;
}
