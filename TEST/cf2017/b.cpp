#include <bits/stdc++.h>
using namespace std;
//define
int mmap[70][70],n,m,sx,sy,ex,ey;
int key[120],kf;
char tmp;
//define
int main(){
    //ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>tmp;
            //.:1 #:2 S:3 E:4;
            mmap[i][j]=(tmp=='.'?1:(tmp=='#'?:2:(tmp=='S'?3:4)));
        }
    }
    int tmp=0;
    while(~scanf("%d",&tmp)){
        key[++kf]=tmp;
    }
  
