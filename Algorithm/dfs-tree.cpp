#include<stdio.h>
struct a{
	int next,v;
}edge[101];
int head[110],cnt,vis[1000];
void add(int u,int v){edge[++cnt].v=v;edge[cnt].next=head[u];head[u]=cnt;}
void dfs(int k)
{
	printf("%d",edge[k].v);
	for(int t=head[k];t!=0;t=edge[t].next){
        if(
            vis[edge[i].v]=1;
        dfs(edge[t].v);
	}
}
int main(){
    int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
        int a,b;
        scanf("%d %d",&a,&b);add(a,b);add(b,a);
    }
    dfs(1);
    return 0;    
}
