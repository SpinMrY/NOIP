#include <iostream>
#include <algorithm>
using namespace std;
//define
struct ff{
    int id,t;
}a[1005];
int n;

bool cmp(ff a,ff b){
    return a.t<b.t;
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].t;a[i].id=i;
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        
