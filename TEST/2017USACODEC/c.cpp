#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
//define
int be=7,el=7,mi=7,n;
struct cl{
    int day,cow,stat;
}ind[405];
int ans;
//function
int cmp(cl a,cl b){
    return a.day<b.day;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    int td,ts;char tc[15];
    for(int i=1;i<=n;i++){
        cin>>td>>tc>>ts;
        ind[i].day=td;ind[i].cow=(tc[0]=='B'?1:(tc[0]=='E'?2:3));ind[n].stat=ts;
    }
    sort
