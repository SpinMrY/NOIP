// luogu-judger-enable-o2
/*splay*/
#include <iostream>
#include <cstdio>
using namespace std;

//define
const int maxn=100005;
const int inf=0x7f7f7f7f;
struct tree{
    int var,fa,ch[2],sum,tot;
}e[maxn];
int n,pt;

inline void update(int x){
    e[x].sum=e[e[x].ch[0]].sum+e[e[x].ch[1]].sum+e[x].tot;
}

inline int identify(int x){
    return e[e[x].fa].ch[0]==x?0:1;
}

inline void connect(int x,int f,int s){
    e[x].fa=f;e[f].ch[s]=x;
}

inline void spin(int x){
    int f=e[x].fa;
    int gf=e[f].fa;
    int gfs=identify(f);
    int fs=identify(x);
    int B=e[x].ch[fs^1];
    connect(B,f,fs);
    connect(f,x,(fs^1));
    connect(x,gf,gfs);
    update(f);update(x);
}

inline void splay(int at,int to){
    to=e[to].fa;
    while(e[at].fa!=0){
        int up=e[at].fa;
        if(e[up].fa==to)spin(at);
        else if(identify(up)==identify(at)){
            spin(up);spin(at);
        }
        else{
            spin(at);spin(at);
        }
    }
}

inline int creatept(int v,int f){
    e[++n].var=v;e[n].fa=f;
    e[n].sum=e[n].tot=1;
    return n;
}

inline void deletept(int x){
    e[x].var=e[x].ch[0]=e[x].ch[1]=e[x].sum=e[x].fa=e[x].tot=0;
    if(x==n)n--;
}

inline int find(int v){
    int now=e[0].ch[1];
    while(true){
        if(e[now].var==v){
            splay(now,e[0].ch[1]);
            return now;
        }
        int next=v<e[now].var?0:1;
        if(!e[now].ch[next])return 0;
        now=e[now].ch[next];
    }
}

inline int build(int v){
    pt++;
    if(n==0){
        e[0].ch[1]=1;
        creatept(v,0);
    }
    else{
        int now=e[0].ch[1];
        while(true){
            e[now].sum++;
            if(v==e[now].var){
                e[now].tot++;
                return now;
            }
            int next=v<e[now].var?0:1;
            if(!e[now].ch[next]){
                creatept(v,now);
                e[now].ch[next]=n;
                return n;
            }
            now=e[now].ch[next];
        }
    }
    return 0;
}

inline void push(int v){
    int add=build(v);
    splay(add,e[0].ch[1]);
}

inline void del(int v){
    int deal=find(v);
    if(!deal)return;
    pt--;
    if(e[deal].tot>1){
        e[deal].tot--;
        e[deal].sum--;
        return ;
    }
    if(!e[deal].ch[0]){
        e[0].ch[1]=e[deal].ch[0];
        e[e[0].ch[1]].fa=0;
    }
    else{
        int lef=e[deal].ch[0];
        while(e[lef].ch[1])
            lef=e[lef].ch[1];
        splay(lef,e[deal].ch[0]);
        int rig=e[deal].ch[1];
        connect(rig,lef,1);
        connect(lef,0,1);
        update(lef);
    }
    deletept(deal);
    return;
}

int rnk(int v){
    int ans=0,now=e[0].ch[1];
    while(true){
        if(e[now].var==v){
            return ans+e[e[now].ch[0]].sum+1;
        }
        if(now==0){
            return 0;
        }
        if(v<e[now].var)
            now=e[now].ch[0];
        else{
            ans=ans+e[e[now].ch[0]].sum+e[now].tot;
            now=e[now].ch[1];
        }
    }
    if(now)splay(now,e[0].ch[1]);
    return 0;
}

int getrank(int x){
    if(x>pt)return -inf;
    int now=e[0].ch[1];
    while(true){
        int mu=e[now].sum-e[e[now].ch[1]].sum;
        if(x>e[e[now].ch[0]].sum&&x<=mu)
            break;
        if(x<mu)
            now=e[now].ch[0];
        else{
            x-=mu;
            now=e[now].ch[1];
        }
    }
    splay(now,e[0].ch[1]);
    return e[now].var;
}

inline int upper(int v){
     int now=e[0].ch[1],result=inf;
     while(now){
         if(e[now].var>v&&e[now].var<result)result=e[now].var;
         if(v<e[now].var)now=e[now].ch[0];
         else now=e[now].ch[1];
     }
     return result;
}

inline int lower(int v){
    int now=e[0].ch[1],result=-inf;
    while(now){
        if(e[now].var<v&&e[now].var>result)result=e[now].var;
        if(v>e[now].var) now=e[now].ch[1];
        else now=e[now].ch[0];
    }
    return result;
}

//main
int main(){
    ios::sync_with_stdio(false);
    int N,cmd,vv;
    cin>>N;
    while(N--){
        cin>>cmd>>vv;
        if(cmd==1)build(vv);
        if(cmd==2)del(vv);
        if(cmd==3)cout<<rnk(vv)<<endl;
        if(cmd==4)cout<<getrank(vv)<<endl;
        if(cmd==5)cout<<upper(vv)<<endl;
        if(cmd==6)cout<<lower(vv)<<endl;
    }
    return 0;
}
