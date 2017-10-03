#include <bits/stdc++.h>
using namespace std;
struct UFS{
    int fa[N],size[N];
    inline void init(){
        for(int i=1;i<=n;i++){
            fa[i]=i;size[i]=1;
        }
    }
    inline void merge(int x,int y){
        int xx=find(x),yy=find(y);
        if(size[xx]<size[yy]){
            swap(xx,yy);
        }
        fa[yy]=xx;size[xx]+=size[yy];
    }
    inline int find(int x){
        while(fa[x]!=x)x=fa[x];
        return x;
    }
};
