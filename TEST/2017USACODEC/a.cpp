#include <iostream>
#include <cstdio>
using namespace std;
//define
int axs,ays,axe,aye,bxs,bys,bxe,bye,cxe,cye,cxs,cys;
int area[2001][2001],ans;
//fun
int cd(int x1,int y1,int x2,int y2,int ex1,int ey1,int ex2,int ey2){
    return ((min(x2,ex2)-max(x1,ex1))*(min(y2,ey2)-max(y1,ey1)));
}
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>axs>>ays>>axe>>aye>>bxs>>bys>>bxe>>bye>>cxs>>cys>>cxe>>cye;
/*
    axs+=1000;ays+=1000;aye+=1000;axe+=1000;bxs+=1000;bxe+=1000;bys+=1000;bye+=1000;
    cxe+=1000;cye+=1000;cxs+=1000;cys+=1000;
*/
    for(int i=axs;i<=axe;i++){
        for(int j=ays;j<=aye;j++){
            area[i][j]=1;
        }
    }for(int i=bxs;i<=bxe;i++){
        for(int j=bys;j<=bye;j++){
            area[i][j]=1;
        }
    }for(int i=cxs;i<=cxe;i++){
        for(int j=cys;j<=cye;j++){
            area[i][j]=0;
        }
    }
    for(int i=0;i<=2000;i++){
        for(int j=0;j<=2000;j++){
            if(area[i][j]==1){
                cout<<j<<" "<<i<<endl;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
