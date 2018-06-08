#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
#define maxn 10007
#define ls l,m,rt<<1  
#define rs m+1,r,rt<<1|1  
int Sum[maxn<<2],Add[maxn<<2];
int A[maxn],n;
//function
void PushUp(int rt){Sum[rt]=Sum[rt<<1]+Sum[rt<<1|1];}
void PushDown(int rt,int ln,int rn){
	if(Add[rt]){
		Add[rt<<1]+=Add[rt];
		Add[rt<<1|1]+=Add[rt];
		Sum[rt<<1]+=Add[rt]*ln;
		Sum[rt<<1|1]+=Add[rt]*rn;
		Add[rt]=0;
	}
}
void Build(int l,int r,int rt){
	if(l==r) {
		Sum[rt]=A[l];
		return;
	}
	int m=(l+r)>>1;
	Build(l,m,rt<<1);
	Build(m+1,r,rt<<1|1);
	PushUp(rt);
}
int Query(int L,int R,int l,int r,int rt){
	if(L <= l && r <= R){
		return Sum[rt];
	}
	int m=(l+r)>>1;
	PushDown(rt,m-l+1,r-m); 
	int ANS=0;
	if(L <= m) ANS=max(ANS,Query(L,R,l,m,rt<<1));
	if(R >  m) ANS=max(ANS,Query(L,R,m+1,r,rt<<1|1));
	return ANS;
} 
//main
int main(){
    ios::sync_with_stdio(false);
    int nn,mm;
    cin>>nn>>mm;
    n=nn;
    for(int i=1;i<=nn;i++){
        cin>>A[i];
    }
    Build(1,n,1);
    while(mm--){
        int ll,rr;
        cin>>ll>>rr;
        int ans=Query(ll,rr,1,n,1);
        cout<<ans<<endl;
    }
    return 0;
}
