#include <bits/stdc++.h>
using namespace std;
//define
bool flag=false;
string eexp;
char cmd,a,b;
//main
int main(){
    ios::sync_with_stdio(false);
//    freopen("bianji.in","r",stdin);
//    freopen("bianji.out","w",stdout);
    getline(cin,eexp);
    string input;
    getline(cin,input);
    cmd=input[0];
    if(cmd=='r'||cmd=='R'){
        a=input[2];b=input[4];
        //a=getchar();b=getchar();
        for(int i=0;i<eexp.length();i++)
            if(eexp[i]==a){eexp[i]=b;flag=true;}
    }else if(cmd=='D' || cmd=='d'){
        a=input[2];
        for(int i=0;i<=eexp.length();i++){
            if(eexp[i]==a){eexp.erase(i,1);flag=true;break;}
        }
    }else if(cmd=='i' || cmd=='I'){
        a=input[2];string bb;int index;
        bb[0]=input[4];
        for(int i=eexp.length();i>=0;i--){
            if(eexp[i]==a){index=i;flag=true;break;}
        }
        if(flag)eexp.insert(index,bb);
    }
    if(flag)cout<<eexp<<endl;
    else cout<<"None";
    return 0;
}
