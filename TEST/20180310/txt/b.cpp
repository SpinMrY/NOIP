#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int n;
list<char> txt;
list<char>::iterator it;
char s[500005];
//function
//main
int main(){
    ios::sync_with_stdio(false);
    cin.getline(s,500000);
    it=txt.begin();
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]<='z'&&s[i]>='a'){
            txt.insert(it,s[i]);++it;
        }
        else{
            if(s[i]=='R')++it;
            else if(s[i]=='L')--it;
            else if(s[i]=='B')txt.erase(it);
        }
    }int flag=0;
    for(it=txt.begin();it!=txt.end();it++){
        char out=*it;
        cout<<out;
    }
    return 0;
}
