#include <bits/stdc++.h>
using namespace std;
//define
int a,b,ans,suanfu;
char fuckyou[10005];
//function

//main
int main(){
    ios::sync_with_stdio(false);
    cin.getline(fuckyou,1000);
    int temp,len=strlen(fuckyou),flag;
    for(int i=0;i<len;i++){
        if(fuckyou[i]=='+'){suanfu=1;flag=i;break;}
        if(fuckyou[i]=='-'){suanfu=2;flag=i;break;}
        if(fuckyou[i]=='/'){suanfu=4;flag=i;break;}
        if(fuckyou[i]=='*'){suanfu=3;flag=i;break;}
        if(fuckyou[i]=='%'){suanfu=5;flag=i;break;}
        if(fuckyou[i]>='0' && fuckyou[i]<='9'){
            temp=fuckyou[i]-'0';
            a=a*10+temp;
        }
    }
    for(int i=flag+1;i<len;i++){
        if(fuckyou[i]>='0' && fuckyou[i]<='9'){
            temp=fuckyou[i]-'0';
            b=b*10+temp;
        }        
    }
    if(suanfu==1){cout<<a+b<<endl;return 0;}
    else if(suanfu==2){cout<<a-b<<endl;return 0;}
    else if(suanfu==3){cout<<a*b<<endl;return 0;}
    else if(suanfu==4){cout<<a/b<<endl;return 0;}
    else if(suanfu==5){cout<<a%b<<endl;return 0;}
    return 0;
}
