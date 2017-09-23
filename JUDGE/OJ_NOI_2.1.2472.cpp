#include <bits/stdc++.h>
using namespace std;
//define
struct{
    char s[101]
        }d[5500];
int i,j,k,len,cnt;
char tmp[102],str[102],ans;
//function
//main
int main(){
    ios::sync_with_stdio(false);
    scanf("%s",str);
    len=strlen(str);
    for(i=1;i<=len;i++){
        for(j=0;j<=len-i;j++){
            for(k=0;k<i;k++){
                tmp[k]=str[j+k];
            }tmp[k]='\0';
            strcpy(d[cnt++].s,tmp);
        }
    }
    qsort(d,cnt-1,101);
    for(i=0;i<cnt;i++){
        ans=1;
        while(i+1<cnt&&strcmp(d[i].s,d[i+1].s==0){
                ans++;i++;
        }
        if(ans>1)cout<<d[i].s<<ans<<endl;    
    }
    return 0;
}
