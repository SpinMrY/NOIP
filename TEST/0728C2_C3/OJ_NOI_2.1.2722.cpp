#include <bits/stdc++.h>
using namespace std;
//define
int n,i,j,a,kk,aa[102],bb[99999],ans;
//main
int main(){
    ios::sync_with_stdio(false);
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&aa[i]);
    }      
    for(i=0;i<a;i++){
       	for(j=i+1;j<a;j++){
            bb[kk]=aa[i]+aa[j];
            kk++;
        }
    }
    for(i=0;i<kk;i++){
        for(j=0;j<a;j++){
            if(bb[i]==aa[j]) ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
