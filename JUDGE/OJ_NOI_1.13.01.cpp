#include <bits/stdc++.h>
using namespace std;
//define
char what[20]={'A','B','C','D','E','F'};
int fuck[20]={10,11,12,13,14,15,16};
long long a,b;char n[500];
long long  ans[500],alen=1;
//function
int char2dec(char a){
    if(a>='a' && a<='f')
        return fuck[a-'a'];
    else if(a>='A' && a<='Z')
        return fuck[a-'A'];
    else if(a>='0' && a<='9')
        return a-'0';
}
long long k2dec(int k,int len){
    long long res=0,flag=0,temp=0;
    for(int i=len-1;i>=0;i--){
        temp=char2dec(n[i]);
        res+=temp*pow(k,flag);
        flag++;
    }
    return res;
}
void print(){
    for(int i=alen;i>=1;i--){
        if(ans[i]>9){
            cout<<what[ans[i]-10];
        }else{
            cout<<ans[i];
        }
    }
    return;
}
void dec2k(long long n,int k){
    long long res=0,tmp=0;
    if(n==0){
        cout<<'0'<<endl;return;
    }    
    while(n>0){
        tmp=n%k;
        ans[alen++]=tmp;        
        n/=k;
    }
    alen--;
    print();
    return;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>a>>n>>b;
    int lenn=strlen(n);
    long long dec=k2dec(a,lenn);
    dec2k(dec,b);
    return 0;
}
