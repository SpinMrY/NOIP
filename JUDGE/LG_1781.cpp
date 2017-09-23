#include <bits/stdc++.h>
using namespace std;
struct Asb{
    int index;
    string sc;
}aa[100050];
string maxstring,maxindex;
//define
/*int cmp(struct Asb a,struct Asb b){
    if(a.sc.length()!=a.sc.length()){return a.sc.length()>b.sc.length();}
    else if(a.sc!=b.sc)return a.sc>b.sc;
    else return a.index>b.index;
    }*/
int n;
int main(){
    ios::sync_with_stdio(false);
    string tmp;int ans;
    cin>>n;int i=0;
    for(i=1;i<=n;i++){
        cin>>tmp;
        if(tmp.length()>maxstring.length()
           ||(tmp.length()==maxstring.length()
              &&tmp>maxstring))
        {maxstring=tmp;ans=i;}
    }
    cout<<ans<<endl<<maxstring;    
    return 0;
}
    
