#include<stdio.h>
struct a{
	int next,v;
}edge[101];
int head[110],v[110],cnt=0,n;
void addup(int u,int v){
	edge[++cnt].v=v;
	edge[cnt].next=head[u];
	head[u]=cnt;
}
void search(int k){
	printf("%d\n",k);
	for(int t=head[k];t>0;t=edge[t].next)
        if(v[t]==0){
            v[t]=1;
            if(t%2==0)v[t-1]=1;
            else      v[t+1]=1;
            search(edge[t].v);
        }
}
int main(){
	int a,b;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
        scanf("%d%d",&a,&b);
        addup(a,b);
        addup(b,a);
	}
	search(1);
	return 0;
}
