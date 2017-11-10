#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
//define
int m,n,k,l,d;
struct road{
    int x,a;
}hang[2005],lie[2005];
//function
int cmpr(road a,road b){return a.x>b.x;}
int cmphl(road a,road b){return a.a<b.a;}
//main
int main(){
    int sx,sy,ex,ey,tmp;
    freopen("seat.in","r",stdin);
    freopen("seat.out","w",stdout);
    ios::sync_with_stdio(false);
    cin>>m>>n>>k>>l>>d;
    while(d--){
        cin>>sx>>sy>>ex>>ey;
        if(sx==ex){
            tmp=min(ey,sy);lie[tmp].x++;lie[tmp].a=tmp;
        }
        else{
            tmp=min(sx,ex);hang[tmp].x++;hang[tmp].a=tmp;
        }
    }
    sort(hang+1,hang+m+1,cmpr);
    sort(lie+1,lie+n+1,cmpr);
    sort(hang+1,hang+k+1,cmphl);
    sort(lie+1,lie+l+1,cmphl);
    for(int i=1;i<=k;i++)cout<<hang[i].a<<" ";cout<<endl;
    for(int i=1;i<=l;i++)cout<<lie[i].a<<" ";
    return 0;
}
