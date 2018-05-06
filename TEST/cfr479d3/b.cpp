#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
map<string,int>tot,ex;
int n,ans;
string anstr;
char a[105];
//function

//main
int main(){
    //ios::sync_with_stdio(false);    
    scanf("%d %s",&n,a);
    for(int i=0;i<n;i++){
        string A;
        if(a[i+1]=='\0')break;
        
        A=a[i];A+=a[i+1];
        tot[A]++;
        if(ans<=tot[A]){
            ans=tot[A];anstr=A;
        }       
    }
    cout<<anstr<<endl;    
    return 0;
}
