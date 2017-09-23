#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
//define
map<string,int> a;
typedef map<string,int> F;
string _index[10005];
//function
int cmp(string a,string b){
    return a>b;
}
//main
int main(){
    ios::sync_with_stdio(false);
    int len;
    int n;cin>>n;char name[30];int temp;
    for(int i=1;i<=n;i++){
        fgets(name,31,stdin);
        len=strlen(name);
        name[len-1]='\0';
        string tmpa(name);
        _index[i]=tmpa;
        a[tmpa]++;
    }double ans=0;double tmp;char *tmpc;
    sort(_index+1,_index+n+1/*,cmp*/); 
    for(int i=1;i<=n;i++){
        //cout<<_index[i]<<"index"<<endl;
        if(_index[i]!=_index[i+1]){
            tmpc=(char*)_index[i].c_str();
            tmp=a[tmpc];
            ans=tmp/n;
            printf("%s %.4f%%\n",tmpc,ans*100);
        }
    }
    return 0;
}
