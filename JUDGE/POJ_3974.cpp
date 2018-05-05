#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int n;
//function
string Manacher(string s) {
    string t="#";
    for (int i = 0; i < s.size(); ++i) {
        t+=s[i];
        t+="#";
    }
    vector<int> RL(t.size(),0);
    int MaxRight=0,pos=0;
    int resLen=0,resCenter=0;
    for(int i=0;i<t.size();++i) {
        RL[i]=MaxRight>i?min(RL[2*pos-i],MaxRight-i):1;
        while(i-RL[i]>=0&&i+RL[i]<t.size()&&t[i+RL[i]]==t[i-RL[i]])
            ++RL[i];
        if(MaxRight<i+RL[i]-1){
            MaxRight=i+RL[i]-1;
            pos=i;
        }
        if(resLen<RL[i]){
            resLen=RL[i];
            resCenter=i;
        }
    }
    return s.substr((resCenter-resLen+1)/2,resLen-1);
}
//main
int main(){
    string ab;int c=0;
    for(;;){
        cin>>ab;
        if(ab=="END")return 0;
        c++;string af=Manacher(ab);
        printf("Case %d: ",c);cout<<af.length()<<endl; 
    }
    return 0;
}
