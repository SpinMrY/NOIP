#include<bits/stdc++.h>
using namespace std;
//function
void bulid(int n,char s1[],char s2[]){
    if(n<=0)  return;
    int p=strchr(s2,s1[0])-s2;
    bulid(p,s1+1,s2);
    bulid(n-p-1,s1+p+1,s2+p+1);
    printf("%c",s1[0]);
}
//main
int main(){
    char s1[10007],s2[10007];
    while(scanf("%s %s",s1,s2)!=EOF){
        bulid(strlen(s1),s1,s2);
        printf("\n");
    }
    return 0;
}
