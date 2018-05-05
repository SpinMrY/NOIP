#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int n;
map<string,int> mmp;
int mx;
//function
/*
ull shash(char a[]){
for(int i=0;i<strlen(a);i++){*/      
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;string a;
    for(int i=1;i<=n;i++){
        cin>>a;
        mmp[a]++;
    }
    cout<<mmp.size()<<endl;
    return 0;
}
