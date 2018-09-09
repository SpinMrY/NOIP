#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

//define
const int maxn=100005;
int n,size,root,ans;
struct Treap{
    int l,r,v,w,rnd,size;
}tr[maxn];

inline void update(int rt){
    tr[rt].size=tr[tr[rt].l].size+tr[tr[rt].r].size+tr[rt].w;
}

inline void rr(int &rt){
    int t=tr[rt].l;
    tr[rt].l=tr[t].r;
    tr[t].r=rt;
    tr[t].size=tr[rt].size;
    update(rt);
    rt=t;
}

inline void lr(int &rt){
    int t=tr[rt].r;
    tr[rt].r=tr[t].l;
    tr[t].l=rt;
    tr[t].size=tr[rt].size;
    update(rt);
    rt=t;
}

inline void insert(int &rt,int x){
    if(rt==0){
        size++;rt=size;
        tr[rt].v=x;tr[rt].size=tr[rt].w=1;
        tr[rt].rnd=rand();
        return ;
    }
    tr[rt].size++;
    if(tr[rt].v==x){tr[rt].w++;}
    else if(tr[rt].v<x){
        insert(tr[rt].r,x);
        if(tr[tr[rt].r].rnd<tr[rt].rnd)lr(rt);
    }
    else{ 
        insert(tr[rt].l,x);
        if(tr[tr[rt].l].rnd<tr[rt].rnd)rr(rt);
    }
}

inline void del(int &rt,int x){
    if(rt==0)return ;
    if(tr[rt].v==x){
        if(tr[rt].w>1){
            tr[rt].w--;
            tr[rt].size--;
            return ;
        }
        if(tr[rt].l*tr[rt].r==0){
            rt=tr[rt].l+tr[rt].r;
        }
        else if(tr[tr[rt].l].rnd<tr[tr[rt].r].rnd){
            rr(rt);
            del(rt,x);
        }
        else{
            lr(rt);
            del(rt,x);
        }
    }
    else if(tr[rt].v<x){
        tr[rt].size--;
        del(tr[rt].r,x);
    }
    else{
        tr[rt].size--;
        del(tr[rt].l,x);
    }
}

inline int queryrank(int &rt,int x){
    if(rt==0)return 0;
    if(tr[rt].v==x){
        return tr[tr[rt].l].size+1;
    }
    else if(tr[rt].v<x){
        return tr[tr[rt].l].size+tr[rt].w+queryrank(tr[rt].r,x);
    }
    else{
        return queryrank(tr[rt].l,x);
    }
}

inline int querynum(int &rt,int x){
    if(rt==0)return 0;
    if(tr[tr[rt].l].size>=x){
        return querynum(tr[rt].l,x);
    }
    else if(tr[tr[rt].l].size+tr[rt].w<x){
        return querynum(tr[rt].r,x-tr[tr[rt].l].size-tr[rt].w);
    }
    else return tr[rt].v;
}
inline void querypro(int rt,int x){
    if(rt==0)return ;
    if(tr[rt].v<x){
        ans=rt;querypro(tr[rt].r,x);
    }
    else querypro(tr[rt].l,x);
}

inline void querysub(int rt,int x){
    if(rt==0)return ;
    if(tr[rt].v>x){
        ans=rt;querysub(tr[rt].l,x);
    }
    else querysub(tr[rt].r,x);
}

//main
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    int opt,x;
    for(int i=1;i<=n;i++){
        cin>>opt>>x;
        if(opt==1){
            insert(root,x);
        }
        else if(opt==2){
            del(root,x);
        }
        else if(opt==3){
            cout<<queryrank(root,x)<<endl;
        }
        else if(opt==4){
            cout<<querynum(root,x)<<endl;;
        }
        else if(opt==5){
            querypro(root,x);
            cout<<tr[ans].v<<endl;
        }
        else if(opt==6){
            querysub(root,x);
            cout<<tr[ans].v<<endl;
        }
    }
    return 0;
}
