#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int n;
struct falei{
    int fm,fz;
    double key;
}fl[10005];
int cnt;
//function
int gcd(int m, int n){
    return (m==0)?n:gcd(n%m, m);
}
int cmp(falei a,falei b){
    return a.key<b.key;
}
//main
int main(){
    freopen("falei.in","r",stdin);
    freopen("falei.out","w",stdout);
    scanf("%d",&n);
    fl[cnt].fm=1;fl[cnt].fz=0;fl[cnt].key=0;
    For(i,1,n){
        For(j,1,i){
            int fm=i,fz=j;
            int gg=gcd(fz,fm);
            if(gg!=1)continue;
            else if(fm==fz)continue;
            else{
                fl[++cnt].fm=fm;fl[cnt].fz=fz;
                fl[cnt].key=(double)fz/(double)fm;
            }
        }
    }
    fl[++cnt].fm=1;fl[cnt].fz=1;fl[cnt].key=1;
    int cur=0;
    sort(fl+1,fl+cnt+1,cmp);
    for(int i=0;i<=cnt;i++){
        printf("%d/%d ",fl[i].fz,fl[i].fm);
        cur++;if(cur==10){cur=0;printf("\n");}
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
