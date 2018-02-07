#include <bits/stdc++.h>
using namespace std;
//define
struct aaa{
    int ii,jj,kk;
    bool operator < (aaa const& _a)const{
        return this->kk<_a.kk;
    }
}mmp;
map< aaa , int > abc;
int n;
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(i+j>k&&i-j<k&&i+k>j&&i-k<j&&j+k>i&&j-k<i){
                    if((i^j^k)==0){
                        int a[50]={i,j,k};
                        sort(a,a+3);mmp.ii=a[0];mmp.jj=a[1];mmp.kk=a[3];
                        if(abc[mmp]!=1){cout<<i<<' '<<j<<' '<<k<<endl;ans++;abc[mmp]=1;}
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
