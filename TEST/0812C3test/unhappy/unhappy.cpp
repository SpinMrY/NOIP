#include <iostream>
using namespace std;
//define
int maax,tmp,a,b,ans;
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("unhappy.in","r",stdin);freopen("unhappy.out","w",stdout);
    for(int i=1;i<=7;i++){
        cin>>a>>b;
        tmp=a+b;
        if(tmp>8&&tmp>maax)
            maax=tmp,ans=i;
    }
    cout<<ans<<endl;
    fclose(stdin);fclose(stdout);
    return 0;
}
