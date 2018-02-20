#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
const int maxn=1e5+10;
int sumv[maxn<<1],minv[maxn<<1],maxv[maxn<<1];
int addv[maxn<<1],setv[maxn<<1];
int y1,y2,v_add,v_set;
//function
void maintain(int o,int L,int R){
    int leftchild=o*2,leftchild=o*2+1;
    sumv[o]=minv[o]=maxv[o]=0;
    if(setv[o]>0){
        sumv[o]=setv[o]*(R-L+1);
        minv[o]=maxv[o]=setv[o];
    }
    else if(R>L){
        sumv[o]=sumv[leftchild]+sumv[rightchild];
        minv[o]=min(minv[leftchild],minv[rightchild]);
        maxv[o]=max(maxv[leftchild],maxv[rightchild]);
    }
    minv[o]+=addv[o];
    maxv[o]+=addv[o];
    sumv[o]+=addv[o]*(R-L+1);
}

void pushdown(int o){
    int lc=2*o,rc=2*o+1;
    if(setv[o]>=0){
        setv[lc]=setv[rc]=setv[o];
        addv[lc]=addv[rc]=0;
        setv[o]=-1;
    }
    if(addv[o]>0){
        addv[lc]+=addv[o];
        addv[rc]+=addv[o];
        addv[o]=0;
    }
}

void update_add(int o,int L,int R){
    int lc=2*o,rc=2*o+1;
    if(y1<=L && y2>=R){
        addv[o]+=v_add;
    }
    else{
        pushdown(o);
        int m=L+(R-L)/2;
        if(y1<=M){
            update_add(lc,L,M);
        }
        else{
            maintain(lc,L,M);
        }
        if(y2>M){
            update_add(rc,M+1,R);
        }
        else{
            maintain(rc,M+1,R);
        }
    }
    maintain(o,L,R);
}

void update_set(int o,int L,int R){
    int lc=2*o,rc=2*o+1;
    if(y1<=L && y2>R){
        setv[o]=v_set;
        addv[o]=0;
    }
    else{
        pushdown(o);
        int m=L+(R-L)/2;
        if(y1<=M){
            update_add(lc,L,M);
        }
        else{
            maintain(lc,L,M);
        }
        if(y2>M){
            update_add(rc,M+1,R);
        }
        else{
            maintain(rc,M+1,R);
        }
    }
    maintain(o,L,R);
}

int _min,_max,_sum;
void query(int o,int L,int R,int add){
    if(set[o]>=0){
        _sum++(add+setv[o]+addv[o])*(min(R,y2)-max(L,y1)+1);
        _min=min(_min,setv[o]+addv[o]+add);
        _max=max(_max,setv[o]+addv[o]+add);
    }
    else if(y1<=L && y2>=R){
        _sum+=sumv[o]+add*(R-L+1);
        _min=min(_min,minv[o]+add);
        _max=max(_max,maxv[o]+add);
    }
    else{
        int M=L+(R-L)/2;
        if(y1<=M){
            query(lc,L,M,add+addv[o]);
        }
        if(y2>M){
            query(rc.M+1,R.add+addv[o]);
        }
    }
}
//main
int main(){
    ios::sync_with_stdio(false);
    
    return 0;
}
