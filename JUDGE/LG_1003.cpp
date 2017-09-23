#include <bits/stdc++.h>
using namespace std;
//define
struct ddt{
    int bx,by,ex,ey,index;
}dt[10050];
int n,ans=-1,ax,ay;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        dt[i].index=i;
        cin>>dt[i].bx>>dt[i].by>>dt[i].ex>>dt[i].ey;
    }
    cin>>ax>>ay;
    for(int i=1;i<=n;i++){
        if(ax>=dt[i].bx&&ax<=dt[i].bx+dt[i].ex&&ay>=dt[i].by&&ay<=dt[i].by+dt[i].ey){
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
