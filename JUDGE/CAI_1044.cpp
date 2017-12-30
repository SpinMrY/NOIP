#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
//define
int n,m,a[15],b[15];
int hz[20],lz[20],c[20][20],f[20][20],ans;
bool h[20][20],l[20][20];
//define
void dfs(int x,int y){
    if(ans>1)return;
    if(x>n){
        bool bk=false;
        for(int i=1;i<=m;i++)if(lz[i]!=b[i]){bk=true;break;}
        if(bk==false){
            ans++;
            if(ans==1){
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=m;j++){
                        f[i][j]=c[i][j];
                    }
                }
            }
        }
        return ;
    }else if(y>m){
        if(hz[x]==a[x]){
            dfs(x+1,1);
        }
    }else if(c[x][y]!=0)dfs(x,y+1);
    else{
        for(int i=1;i<=9;i++){
            if(h[x][i]==0&&l[y][i]==0&&i+hz[x]<=a[x]&&i+lz[y]<=b[y]){
                c[x][y]=i;
                h[x][i]=true;l[y][i]=true;
                hz[x]+=i;lz[y]+=i;
                dfs(x,y+1);
                c[x][y]=0;
                h[x][i]=false;l[y][i]=false;
                hz[x]-=i;lz[y]-=i;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ans=0;
        memset(l,false,sizeof(l));
        memset(h,false,sizeof(h));
        memset(hz,0,sizeof(hz));
        memset(lz,0,sizeof(lz));
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int j=1;j<=m;j++){
            cin>>b[j];
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>c[i][j];
                h[i][c[i][j]]=true;
                l[j][c[i][j]]=true;
                hz[i]+=c[i][j];
                lz[j]+=c[i][j];
            }
        }
        dfs(1,1);
        if(ans==1){
            for(int i=1;i<=n;i++){
                for(int j=1;j<m;j++){
                    cout<<f[i][j]<<' ';
                }
                cout<<f[i][m]<<endl;
            }
        }
        else if(ans>1){
            cout<<"Not unique."<<endl;
        }
        else if(ans==0){
            cout<<"No answer."<<endl;
        }
    }
    return 0;
}
