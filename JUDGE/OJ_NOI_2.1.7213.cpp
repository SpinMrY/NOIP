#include <bits/stdc++.h>
using namespace std;
//define
int d,n,temp,m,ansmax,anscount;
int _map[1050][1050],a[1050][1050];
//main
int main(){
    ios::sync_with_stdio(false);
    cin>>d>>n;int tx,ty,tm;
    for(int i=1;i<=n;i++){
        cin>>tx>>ty>>tm;
        a[tx+1][ty+1]=tm;
    }
    for(int i=1;i<=1025;i++){
        for(int j=1;j<=1025;j++){
            _map[i][j]=a[i][j]+_map[i-1][j]+_map[i][j-1]-_map[i-1][j-1];
        }
    }
    for(int i=1;i<=1025;i++){
        for(int j=1;j<=1025;j++){
            temp=_map[i+d][j+d]+_map[i-d-1][j-d-1]-_map[i-d-1][j]+_map[i][j-d-1];
            if(ansmax==temp)anscount++;
            if(ansmax<temp){
                anscount=1;ansmax=temp;
            }
        }
    }
    cout<<anscount<<" "<<ansmax<<endl;
    return 0;
}
