#include <bits/stdc++.h>
using namespace std;
//define
struct edge{
    int u,v,w;

}e[4000050];
int flag,pre[1005],ans,n,cnt,t;
int judge(int x){
    int j=x;
    while(j!=pre[j]){
        j=pre[j];
    }
    int i=x;
    while(i!=j){
        i=pre[i];
        pre[i]=j;
    }
    return j;
}

void find(int x){
    int a,b;
    a=judge(e[x].u);
    b=judge(e[x].v);
    if(a!=b){
        pre[a]=b;
        flag=1;
    }

}

bool cmp(edge a,edge b){
    return a.w<b.w;
}
//main
int main(){
    ios::sync_with_stdio(false);
    int w;
    cin>>n;
    for(int i=1;i<=n;i++){
        pre[i]=i;
        for(int j=1;j<=n;j++){
            cin>>w;
            if(w!=0){
                e[++cnt].u=i;
                e[cnt].v=j;
                e[cnt].w=w;
            }
        }
    }
    sort(e+1,e+cnt+1,cmp);
    for(int i=1;i<=cnt;i++){
        flag=0;
        find(i);
        if(flag == 1){
            ans=ans+e[i].w;
            t++;
        }
        if(t==n-1){
            cout<<ans<<endl;
            return 0;

        }

    }
    return 0;
}        
