#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
//define
//0朝向圈内左-右+
int n,m;
struct toy{
    int nn;
    char name[50];
}t[100050];
char ansn[50];
//main
int main(){
    //ios::sync_with_stdio(false);
    freopen("toy.in","r",stdin);
    freopen("toy.out","w",stdout);
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d %s",&t[i].nn,t[i].name);
    }int next=1,tmpcmd=0,tmpnn=0;
    for(int i=1;i<=m;i++){
        scanf("%d %d",&tmpnn,&tmpcmd);
        if((tmpnn+t[next].nn)%2==1){
            next=next+tmpcmd%n;
            if(next>n)next-=n;
        }
        else if((tmpnn+t[next].nn)%2==0){
            next=next-tmpcmd%n;
            if(next<1)next+=n;
        }
    }
    cout<<t[next].name<<endl;
    return 0;
}
