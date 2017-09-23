#include <cstdio>
#include <iostream>
#define p1 +1
#define p2 +2
#define m1 -1
#define m2 -2
#define bjm =2;
int x,y,n,m;
long long map[30][30];
long long ans[30][30];
void chuli(){
	map[x][y]bjm
	map[x m1][y m2]bjm map[x m1][y p2]bjm
	map[x m2][y m1]bjm map[x m2][y p1]bjm
	map[x p1][y m2]bjm map[x p1][y p2]bjm
	map[x p2][y m1]bjm map[x p2][y p1]bjm
}
int main(){
	std::ios::sync_with_stdio(false);
	scanf("%d%d%d%d",&n,&m,&x,&y);
	chuli();
	map[x][y]=2;

	ans[1][0]=1;
	for(int i=1;i<=n+1;i++){
		for(int j=1;j<=m+1;j++){
			ans[i][j]=ans[i-1][j]+ans[i][j-1];
			if(map[i-1][j-1]==2){
				ans[i][j]=0;
			}
		}
	}
	std::cout<<ans[++n][++m]<<std::endl;
	return 0;
}
