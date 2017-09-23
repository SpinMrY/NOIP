#include <bits/stdc++.h>
using namespace std;
//define
char mmap[1005][1005],tmp[10050],len;
int nx,ny;

//function
void point(){
    for(int i=1;i<=nx;i++){
        for(int j=1;j<=ny;j++){
            cout<<mmap[i][j];
        }cout<<endl;
    }cout<<endl;
}

int dfs(int x,int y){
    if(x>nx || y>ny || mmap[x][y]=='#'){
        return 0;
    }
    else if(mmap[x][y]=='@' || mmap[x][y]=='.'){
        point();
        mmap[x][y]='#';
        return 1+dfs(x+1,y)+dfs(x-1,y)+dfs(x,y+1)+dfs(x,y-1);
    }
}

//main
int main(){
    ios::sync_with_stdio(false);
    int N;
    cin>>N;
    while(N--){
        int sx,sy,flagw=1;
        cin>>nx>>ny;
        memset(mmap,'#',sizeof(mmap));
        for(int i=1;i<=ny;i++){
            fgets(tmp,1005,stdin);
            flagw=1;
            len=strlen(tmp);
            for(int j=0;j<=len;j++){
                if(tmp[j]=='.' || tmp[j]=='#' || tmp[j]=='@'){
                    mmap[i][flagw++]=tmp[j];
                    if(mmap[i][flagw-1]=='@'){
                        sx=flagw-1;sy=i;
                    }
                }
            }
        }
        point();
        int ans=dfs(sx,sy);
        cout<<ans<<endl;
    }
    return 0;
}
