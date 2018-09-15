#include <iostream>
#include <string>
using namespace std;
//define
string sub,pro;
//func
void dfs(int l,int r,int s,int e){
    cout<<pro[e];
    int a=0;
    for(int i=0;i<pro.length();i++){
        if(sub[i]==pro[e]){a=i;break;}
    }
    if(a>l)dfs(l,a-1,s,e-r+a-1);
    if(a<r)dfs(a+1,r,s+a-l,e-1);
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>sub>>pro;
    dfs(0,sub.length()-1,0,sub.length()-1);
    return 0;
}
