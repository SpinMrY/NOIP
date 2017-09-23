//Fick dich~motherficker~
#include <bits/stdc++.h>
using namespace std;
//define
int flag=1,ans=1;
struct people{
    char name[30];
    int src;
}ha[200005];
//function
int cmp(people a,people b){
    return a.src>b.src;
}
//main
int main(){
    ios::sync_with_stdio(false);
    
    freopen("2.in","r",stdin);
    int t1,t2,t3,t4,t5;
    while(scanf("%s%d%d%d%d%d",ha[flag++].name,&t1,&t2,&t3,&t4,&t5)!=EOF){
        ha[flag-1].src=(t1+t2+t3+t4+t5)/5;
        // cout<<ha[flag-1].src;
    }
    sort(ha+1,ha+flag,cmp);
    for(int i=1;i<=flag-1;i++){
        if(ha[i].src>60)
            cout<<ans++<<" "<<ha[i].name<<endl;
    }
    return 0;
}
