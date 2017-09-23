/*#include <bits/stdc++.h>
  using namespace std;
//define
int ans,ansa[100500],ansb[100500],a,b,lena,lenb;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>a>>b;
    ansa[++lena]=a;
    ansb[++lenb]=b;
    int ta=a,tb=b;
    while(ta>1){
        ta/=2;
        ansa[++lena]=ta;
    }
    while(tb>1){
        tb/=2;
        ansb[++lenb]=tb;
    }
    int nowa=lena,nowb=lenb;
    while(ansa[nowa]==ansb[nowb]){
        nowa--;nowb--;ans++;
    }cout<<ans;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
//main
int main(){
    ios::sync_with_stdio(false);
    int x, y;
    cin>>x>>y;
    if(x==y){
        cout<<x<<endl;
        return 0;
    }
    do{
        if(x<y)swap(x, y);
        x/=2;
    }while(x!=y);
    cout<<x<<endl;
    return 0;
}
