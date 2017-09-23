#include <bits/stdc++.h>
using namespace std;
int vday[100],test,vis[100][100],n,day,team;
int main(){
    ios::sync_with_stdio(false);
    cin>>n;team=2<<n-1;day=team-1;
    cout<<day<<endl;
    for(int i=1;i<=day;i++){
        memset(vday,0,sizeof(vday));
        for(int cnt=1;cnt<=team/2;cnt++){
            for(int cm=1;cm<=team;cm++){
                if(vday[cm])continue;
                test=0;
                for(int cm2=1;cm2<=team;cm2++){
                    if(cm==cm2 || vday[cm2]==1)continue;
                    if(vis[cm][cm2]==0 && vis[cm2][cm]==0)
                        cout<<cm<<'-'<<cm2;
			vis[cm][cm2]=1;vday[cm]=1;vday[cm2]=1;test=1;break;
                }if(test)break;
            }
            if(cnt!=team/2-1)cout<<",";
        }cout<<endl;
    }
    return 0;
}   
