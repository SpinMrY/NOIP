#include <iostream>
#include <cstdio>
using namespace std;
//define
int ansa,ansb,n,a[205],b[205],na,nb;
int ans[6][6]={{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
//function
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("rps.in","r",stdin);
    freopen("rps.out","w",stdout);
    cin>>n>>na>>nb;
    int times=0;
ina:
    cin>>a[times++];
    if(times<na)goto ina;
    times=0;
inb:
    cin>>b[times++];
    if(times<nb)goto inb;
    times=1;int tmpa=0,tmpb=0;
loop:
    if(tmpa>na-1)tmpa=0;
    if(tmpb>nb-1)tmpb=0;
    ansa+=ans[a[tmpa]][b[tmpb]];
    ansb+=ans[b[tmpb]][a[tmpa]];
    tmpa++,tmpb++;
    if(times<n){times++;goto loop;}
    cout<<ansa<<' '<<ansb<<endl;
    fclose(stdin);fclose(stdout);
    return 0;
}
