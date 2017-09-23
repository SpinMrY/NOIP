#include<bits/stdc++.h>
using namespace std;
//define
int i,j,k,l=0,n,m;
char a[10000];char b[10000];int z[10000];
//main
int main(){
    gets(a);
    gets(b);
    n=strlen(b);
    m=strlen(a);
    for(i=0;i<m;i++){
        if(a[i]>='A'&&a[i]<='Z') z[i]=a[i]-65;else
        z[i]=a[i]-97;  
    }
     for(i=0;i<n;i++){
        if(l>=m) l=0;   
        if(b[i]>='A'&&b[i]<='Z'){  
            if(b[i]-z[l]<65){    
                cout<<char(b[i]-z[l]+26); 
            }else cout<<char(b[i]-z[l]);
        }else
        if(b[i]>='a'&&b[i]<='z'){
            if(b[i]-z[l]<97) cout<<char(b[i]-z[l]+26);else
            cout<<char(b[i]-z[l]); 
        }
        l++;
    }
    return 0;
}
