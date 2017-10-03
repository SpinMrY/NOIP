#include <iostream>
#include <vector>
using namespace std;
//define
struct tie{
    int index;
    long long c,w;
}t[100005];
typedef long long ull;

vector<int> color[100005];
ull ans;int n,m;
ull const mod=10007;

//function
int calcy(int a,int b){return (a+b)/2;}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        t[i].index=i;
        cin>>t[i].w;
    }for(int i=1;i<=n;i++){
        cin>>t[i].c;
        color[t[i].c].push_back(i);
    }
    for(int c=1;c<=m;c++){
        for(int i=0;i<color[c].size();i++){
            for(int j=0;j<=color[c].size();j++){
                int xn=t[color[c][i]].index,zn=t[color[c][j]].index;
                int xw=t[color[c][i]].w,zw=t[color[c][j]].w;
                if(xn<zn&&(xn+zn)%2==0&&calcy(xn,zn)>xn&&calcy(xn,zn)<zn){
                    ull temp=(xn+zn)*(xw+zw);temp%=mod;
                    ans+=temp;ans%=10007;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
