#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long
//define
int anss[10050],flag=1;
//main
int main(){
    ios::sync_with_stdio(false);
    int mi,N=0,len;char temp[233];
    int n;
    cin>>N;
    n=N;
    while(N--){
        scanf("%s",temp);
        len=strlen(temp);
        mi=temp[len-1]-'0';
        if(len>=2)mi+=(temp[len-2]-'0')*10;
        if(len>=3)mi+=(temp[len-3]-'0')*100;
        
        ULL ans=2011;
        for(ULL i=2;i<=mi;i++){
            ans*=2011;
            if(ans>10000)ans%=10000;
        }
        anss[flag++]=ans;
./    }
    for(int i=1;i<=n;i++){
        cout<<anss[i]<<endl;
    }    
    return 0;
}
