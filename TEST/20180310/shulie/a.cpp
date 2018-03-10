#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int n,cnt,cmd,a;
vector<int> fi;
//main
int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&cmd,&a);
        if(cmd==1)fi.push_back(a);
        if(cmd==2){
            vector<int>::iterator result=find(fi.begin(),fi.end(),a);
            if(result==fi.end())cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
    return 0;
}
