#include <bits/stdc++.h>
using namespace std;
//define
int n,r,ans[10050],len;
char numchar[]="0123456789ABCDEFGHI";
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>r;int nn=n;
    while(n!=0){
        int a=n%r;n/=r;
        if(a<0)a-=r,n++;
        ans[++len]=a;
    }
    cout<<nn<<"=";
    for(int i=len;i>=1;i--){
        char tmp=numchar[ans[i]];
        cout<<tmp;
    }
    cout<<"(base"<<r<<")";return 0;
}
