#include <bits/stdc++.h>
using namespace std;
//defin
int a,n,m,x,ansshangche,renshu[10005],shangche[10005];
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>a>>n>>m>>x;
    shangche[1]=a;renshu[1]=a;renshu[2]=a;
    for(int i=1;i<=10000;i++){
        shangche[2]=i;
        for(int j=3;j<=n-1;j++){
            shangche[j]=shangche[j-1]+shangche[j-2];
            renshu[j]=renshu[j-1]+shangche[j]-shangche[j-1];
        }
        if(renshu[n-1]==m){
            ansshangche=i;
            break;
        }
    }cout<<renshu[x]<<endl;
    return 0;
}
