#include <iostream>
#include <map>
#include <cstdio>
#include <cstring>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int n,cnt,cmd,a;
map<int,string> fi;
//main
int main(){
    freopen("shulie.in","r",stdin);
    freopen("shulie.out","w",stdout); 
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&cmd,&a);
        if(cmd==1)fi[a]="fuck";
        if(cmd==2){
            if(fi.count(a)==0)cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
