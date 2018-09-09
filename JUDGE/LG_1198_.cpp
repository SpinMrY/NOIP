#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 200001;

int m,d,maxo[maxn << 2],len,t;

void charu(int l,int r,int rt,int i,int j){
    if(l==r){ 
        maxo[rt]=j;
        return; 
    }
    int mid=(l+r)>>1;
    if(i<=mid)charu(l,mid,rt<<1,i,j);
    else charu(mid+1,r,rt<<1|1,i,j);
    maxo[rt]=max(maxo[rt<<1],maxo[rt<<1|1]);
}

int query(int l, int r, int rt, int x, int y){
    if (x<=l&&r<=y)
        return maxo[rt];
    int mid=(l+r)>>1;
    int temp=-2147483647;
    if (x<=mid)
        temp=max(temp,query(l,mid,rt<<1,x,y));
    if (y > mid)
        temp=max(temp,query(mid+1,r,rt<<1|1,x,y));
    return temp;
}

int main(){
	ios::sync_with_stdio(false);
    cin>>m>>d;
    memset(maxo,128,sizeof(maxo));
	while(m--){
        char c;int i;
        cin>>c>>i;
        if (c=='A'){ 
			len++;
			charu(1,maxn,1,len,(i+t)%d);
		}
        else{
			t=query(1,maxn,1,len-i+1,len);
			cout<<t<<endl;
		}
    }
    return 0;
}
