#include <iostream>
#include <cstdio>
using namespace std;
//define
int ans;
//main
int main(){
    ios::sync_with_stdio(false);
    freopen("isbn.in","r",stdin);
    freopen("isbn.out","w",stdout);
    char ana[20];
    cin>>ana;
    ans+=(ana[0]-'0')*1+(ana[2]-'0')*2+(ana[3]-'0')*3+(ana[4]-'0')*4+(ana[6]-'0')*5+(ana[7]-'0')*6+(ana[8]-'0')*7+(ana[9]-'0')*8+(ana[10]-'0')*9;
    ans=ans%11;
    if(ans==10){
        if(ana[12]!='X'){
            for(int i=0;i<=11;i++)
                cout<<ana[i];
            if(ans==10)
                cout<<"X"<<endl;
            else
                cout<<ans<<endl;
        }
        else{
            cout<<"Right"<<endl;
        }
    }
    else{
        if(ans==ana[12]-'0')cout<<"Right"<<endl;
        else{
            for(int i=0;i<=11;i++)
                cout<<ana[i];
            if(ans==10)
                cout<<"X"<<endl;
            else
                cout<<ans<<endl;
        }
    }
    return 0;
}
