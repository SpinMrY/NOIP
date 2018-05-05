#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
const int SIZE=100010;

int n,head[100001],nxt[100001],tot;
int snow[100001][6];

const int mod=19260817;

//function
int ha(int *a){
    int sum=0,mul=1;
    for(int i=0;i<6;i++){
        sum=(sum+a[i])%mod;
        mul=(mul*a[i])%mod;
    }
    return (sum+mul)%mod;
}

int eqa(int *a,int *b){
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            bool eq=true;
            for(int k=0;k<6;k++){
                if(a[(i+k)%6]!=b[(j+k)%6])eq=0;
            }
            if(eq)return 1;
            eq=true;
            for(int k=0;k<6;k++){
                if(a[(i+k)%6]!=b[(j-k)%6])eq=0;
            }
            if(eq)return 1;
        }
    }
}                   
                       
int insert(int *a){
    int var=ha(a);
    for(int i=head[var];i;i=nxt[i]){
        if(eqa(snow[i],a)) return 1;
    }
    ++tot;
    memcpy(snow[tot],a,6*sizeof(int));
    nxt[tot]=head[var];
    head[var]=tot;
    return 0;
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        int a[10];
        for(int i=0;i<6;i++)cin>>a[i];
        if(insert(a)){
            cout<<"Twin snowflakes found."<<endl;
            return 0;
        }
    }
    cout<<"No two snowflakes are alike."<<endl;
    
    return 0;
}
