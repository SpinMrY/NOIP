#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
//define
struct damn{
    int x,y;
}a[100050];
int n,l,r;
//define
int cmp(damn a,damn b){
    if(a.x==b.x)
        return a.y<b.y;
    return a.x<b.x;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+n+1,cmp);
    l=a[1].x;r=a[1].y;
    for(int i=2;i<=n;i++){
        if(a[i].x<=r){
            if(a[i].y>r){
                r=a[i].y;
            }
        }
        else{
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<l<<' '<<r<<endl;
    return 0;
}
