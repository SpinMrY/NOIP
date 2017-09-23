#include <bits/stdc++.h>
using namespace std;
//define
int m,n;
struct people{
    int k,s;
}peo[505000];
//function
int cmp(people a,people b){
    if(a.s!=b.s)
        return a.s>b.s;
    else
        return a.k<b.k;
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>peo[i].k>>peo[i].s;
    }
    sort(peo+1,peo+n+1,cmp);
    int zm=floor(m*1.5);
    int anscount,ansfenshu=peo[zm].s;
    for(int i=1;i<=n;i++){
        if(peo[i].k>=ansfenshu)anscount++;
        else break;
    }
    anscount--;    
    cout<<ansfenshu<<" "<<anscount<<endl;
    for(int i=1;i<=anscount;i++){
        if(i!=anscount)cout<<peo[i].k<<" "<<peo[i].s<<endl;
        else cout<<peo[i].k<<" "<<peo[i].s;
    }
    return 0;
}
