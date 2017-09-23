#include <bits/stdc++.h>
using namespace std;
//define
int n,len;
int _max,_min=2333333;
char phone[25];
int t[10000000];
//function
int FUCK(){
    int res=0;
    for(int i=0;i<=len;i++){
        if(phone[i]=='A' || phone[i]=='B' || phone[i]=='C'){
            res=res*10+2; 
        }
        if(phone[i]=='D' || phone[i]=='E' || phone[i]=='F'){
            res=res*10+3; 
        }
        if(phone[i]=='G' || phone[i]=='H' || phone[i]=='I'){
            res=res*10+4; 
        }
        if(phone[i]=='J' || phone[i]=='K' || phone[i]=='L'){
            res=res*10+5; 
        }
        if(phone[i]=='M' || phone[i]=='N' || phone[i]=='O'){
            res=res*10+6; 
        }
        if(phone[i]=='P' || phone[i]=='R' || phone[i]=='S'){
            res=res*10+7; 
        }
        if(phone[i]=='T' || phone[i]=='U' || phone[i]=='V'){
            res=res*10+8; 
        }
        if(phone[i]=='W' || phone[i]=='X' || phone[i]=='Y'){
            res=res*10+9; 
        }
        if(phone[i]>='0' && phone[i]<='9'){
            res=res*10+phone[i]-'0';
        }
    }
    return res;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;int temp;
    for(int i=1;i<=n;i++){
        cin>>phone;len=strlen(phone);
        temp=FUCK();t[temp]++;
        //cout<<temp<<endl;
        _max=max(temp,_max);
        _min=min(temp,_min);
    }int f,b;bool flag;char ansf[20],ansb[20];
    //cout<<_min<<endl<<_max<<endl;
    for(int i=_min-10;i<=_max+10;i++){
        if(t[i]>=2){
            flag=true;
            f=i/10000;
            b=i%10000;
            printf("%03d-%04d %d\n",f,b,t[i]);
        }
    }
    if(flag==false){
        cout<<"No duplicates."<<endl;
    }    
    return 0;
}
